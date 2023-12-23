#include <stdio.h>
#include <assert.h>

// 定义有理数的结构体
typedef struct RATIONAL {
    int x, y;  // 分子和分母
} Rational;

// 计算最大公约数的函数
int gcd(int x, int y);

// 函数声明：有理数的加法
Rational* ADD(Rational* result, const Rational* r1, const Rational* r2);

// 函数声明：有理数的乘法
Rational* MULTI(Rational* result, const Rational* r1, const Rational* r2);

int main() {
    // 测试 ADD 函数
    Rational a = {1, 2};
    Rational b = {3, 4};
    Rational result_add;
    ADD(&result_add, &a, &b);
    printf("Addition: %d/%d\n", result_add.x, result_add.y);

    // 测试 MULTI 函数
    Rational c = {2, 3};
    Rational d = {4, 5};
    Rational result_multi;
    MULTI(&result_multi, &c, &d);
    printf("Multiplication: %d/%d\n", result_multi.x, result_multi.y);

    return 0;
}

// 计算最大公约数的函数定义
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// 有理数的加法函数定义
Rational* ADD(Rational* result, const Rational* r1, const Rational* r2) {
    // 分子相加，分母相乘
    result->x = r1->x * r2->y + r2->x * r1->y;
    result->y = r1->y * r2->y;

    // 化简结果，计算最大公约数
    int common = gcd(result->x, result->y);
    result->x /= common;
    result->y /= common;

    return result;
}

// 有理数的乘法函数定义
Rational* MULTI(Rational* result, const Rational* r1, const Rational* r2) {
    // 分子相乘，分母相乘
    result->x = r1->x * r2->x;
    result->y = r1->y * r2->y;

    // 化简结果，计算最大公约数
    int common = gcd(result->x, result->y);
    result->x /= common;
    result->y /= common;

    return result;
}

