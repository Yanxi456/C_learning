#include <stdio.h>
#include <string.h>

void sortByLength(char *strArray[], int numStrings) {
    int count[100];
    int sort[100];

    // 计算字符串的长度并存储到count数组中
    for (int i = 0; i < numStrings; i++) {
        count[i] = strlen(strArray[i]);
    }

    // 将count数组复制到sort数组中
    for (int i = 0; i < numStrings; i++) {
        sort[i] = count[i];
    }

    // 冒泡排序，从大到小
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = 0; j < numStrings - i - 1; j++) {
            if (sort[j] < sort[j + 1]) {
                // 交换sort数组中的元素
                int temp = sort[j + 1];
                sort[j + 1] = sort[j];
                sort[j] = temp;
            }
        }
    }

    // 输出排序后的字符串
    for (int i = numStrings-1 ; i >=0 ; i--) {
        for (int j = 0; j < numStrings; j++) {
            if (count[j] == sort[i]) {
                printf("%s\n", strArray[j]);
                count[j]=0;
                break;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char *ptr[100];

    // 逐个读取字符串，并存储到ptr数组中
    for (int i = 0; i < n; i++) {
        ptr[i] = malloc(100); // 分配足够的空间来存储字符串
        scanf("%s", ptr[i]);
    }

    // 调用排序函数
    sortByLength(ptr, n);

    // 释放分配的内存
    for (int i = 0; i < n; i++) {
        free(ptr[i]);
    }

    return 0;
}

