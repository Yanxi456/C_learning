#include <stdio.h>
#include <string.h>

void oddReverse(char *s) {
    int n = strlen(s), j = 0, k = 0;
    char odd_s[(n + 1) / 2], re_o[n];

    // 抽取奇数位置的字符
    for (int i = 1; i < n; i += 2) {
        odd_s[j++] = *(s + i);
    }

    // 反转 odd_s 并存储到 re_o 中
    for (int i = n - 1; i >= 0; i--) {
        re_o[n - 1 - i] = odd_s[i];
    }

    // 在 re_o 的末尾添加 null 字符
    re_o[n] = '\0';

    // 将反转后的字符插入到奇数位置
    for (int i = 1; i < n; i += 2) {
        s[i] = re_o[k++];
    }
}

int main() {
    char s[105];
    scanf("%s", s);
    oddReverse(s);
    printf("%s", s);
    return 0;
}

