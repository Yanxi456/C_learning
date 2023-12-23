#include <stdio.h>
#include <string.h>

void removeDigits(char *s) {
    int n = strlen(s);
    char de_str[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (*(s + i) >= 65 && *(s + i) <= 90) {
            de_str[j++] = s[i];
        }
        if (*(s + i) >= 97 && *(s + i) <= 122) {
            de_str[j++] = s[i];
        }
    }
    de_str[j] = '\0'; // ��� null �ַ���ȷ���ַ�������ȷ��ֹ
    strcpy(s, de_str);
}

void reverseStr(char *s) {
    int n = strlen(s);
    char temp_str[n + 1]; // ����һ���ֽ������� null �ַ�
    for (int i = n - 1; i >= 0; i--) {
        temp_str[n - 1 - i] = *(s + i);
    }
    temp_str[n] = '\0'; // ��� null �ַ���ȷ���ַ�������ȷ��ֹ
    strcpy(s, temp_str);
}



int main()
{
	char s[10000];

	/* Input string from user */
	gets(s);
	
    removeDigits(s);
	reverseStr(s);

	printf("%s", s);
	return 0;
}

