#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool repeatedSubstringPattern(char *s) {
    int n = strlen(s), sign = 0;
    for (int i = 1; i <= n / 2; i++) {
        sign = 0; // 重置 sign 的值
        if (n % i == 0) {
            char sub[i + 1];
            strncpy(sub, s, i);
            for (int j = 0; j < n; j += i) {
                for (int k = 0; k < i; k++) {
                    if (sub[k] != s[k + j]) { // 修正比较条件
                        sign = -1;
                        break;
                    }
                }
                if (sign == -1)
                    break;
            }
        }
        if (sign == 0)
            return true;
    }
    return false;
}

int main() {
    char str[] = "abab";
    if (repeatedSubstringPattern(str)) {
        printf("The string has a repeated substring pattern.\n");
    } else {
        printf("The string does not have a repeated substring pattern.\n");
    }
    return 0;
}

