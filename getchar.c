#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int count[3] = {0}; // 初始化计数数组

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); // 更安全的输入方式

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count[0]++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count[1]++;
        }
        if (s[i] >= '0' && s[i] <= '9') {
            count[2]++;
        }
        else{
        	count[3]++;
		}
    }

    printf("Number of lowercase letters: %d\n", count[0]);
    printf("Number of uppercase letters: %d\n", count[1]);
    printf("Number of digits: %d\n", count[2]);
    printf("%d",count[3]);

    return 0;
}

