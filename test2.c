#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int);  // ��������ָ��

    funcPtr = add;  // ��ʼ������ָ��Ϊ add ����

    // ʹ�ý����ò��������ú���ָ��
    int result = (*funcPtr)(3, 4);

    printf("Result: %d\n", result);

    return 0;
}

