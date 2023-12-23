#include <stdio.h>
#include <assert.h>

// �����������Ľṹ��
typedef struct RATIONAL {
    int x, y;  // ���Ӻͷ�ĸ
} Rational;

// �������Լ���ĺ���
int gcd(int x, int y);

// �����������������ļӷ�
Rational* ADD(Rational* result, const Rational* r1, const Rational* r2);

// �����������������ĳ˷�
Rational* MULTI(Rational* result, const Rational* r1, const Rational* r2);

int main() {
    // ���� ADD ����
    Rational a = {1, 2};
    Rational b = {3, 4};
    Rational result_add;
    ADD(&result_add, &a, &b);
    printf("Addition: %d/%d\n", result_add.x, result_add.y);

    // ���� MULTI ����
    Rational c = {2, 3};
    Rational d = {4, 5};
    Rational result_multi;
    MULTI(&result_multi, &c, &d);
    printf("Multiplication: %d/%d\n", result_multi.x, result_multi.y);

    return 0;
}

// �������Լ���ĺ�������
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// �������ļӷ���������
Rational* ADD(Rational* result, const Rational* r1, const Rational* r2) {
    // ������ӣ���ĸ���
    result->x = r1->x * r2->y + r2->x * r1->y;
    result->y = r1->y * r2->y;

    // ���������������Լ��
    int common = gcd(result->x, result->y);
    result->x /= common;
    result->y /= common;

    return result;
}

// �������ĳ˷���������
Rational* MULTI(Rational* result, const Rational* r1, const Rational* r2) {
    // ������ˣ���ĸ���
    result->x = r1->x * r2->x;
    result->y = r1->y * r2->y;

    // ���������������Լ��
    int common = gcd(result->x, result->y);
    result->x /= common;
    result->y /= common;

    return result;
}

