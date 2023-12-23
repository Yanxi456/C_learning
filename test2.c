#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int);  // 声明函数指针

    funcPtr = add;  // 初始化函数指针为 add 函数

    // 使用解引用操作符调用函数指针
    int result = (*funcPtr)(3, 4);

    printf("Result: %d\n", result);

    return 0;
}

