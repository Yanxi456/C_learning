#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 函数用于反转字符串中指定范围的字符
void reverseSubstring(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// 函数用于对字符串中的每个单词进行反转
void reverseWords(char *sentence) {
    int n = strlen(sentence);
    int start = 0, end = 0;

    while (end <= n) {
        // 判断是否是空格或标点符号，或者是否到达字符串末尾
        if (isspace(sentence[end]) || ispunct(sentence[end]) || sentence[end] == '\0') {
            // 反转当前单词
            reverseSubstring(sentence, start, end - 1);
            // 更新下一个单词的起始位置
            start = end + 1;
        }
        end++;
    }
}

int main() {
    char s[100];
    char *ptr = s;

    // 使用fgets来避免gets的安全问题
    fgets(s, sizeof(s), stdin);

    // 去掉换行符
    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }

    reverseWords(ptr);
    printf("%s\n", ptr);

    return 0;
}

