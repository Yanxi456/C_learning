#include <stdio.h>
#include <string.h>
#include <ctype.h>

// �������ڷ�ת�ַ�����ָ����Χ���ַ�
void reverseSubstring(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// �������ڶ��ַ����е�ÿ�����ʽ��з�ת
void reverseWords(char *sentence) {
    int n = strlen(sentence);
    int start = 0, end = 0;

    while (end <= n) {
        // �ж��Ƿ��ǿո������ţ������Ƿ񵽴��ַ���ĩβ
        if (isspace(sentence[end]) || ispunct(sentence[end]) || sentence[end] == '\0') {
            // ��ת��ǰ����
            reverseSubstring(sentence, start, end - 1);
            // ������һ�����ʵ���ʼλ��
            start = end + 1;
        }
        end++;
    }
}

int main() {
    char s[100];
    char *ptr = s;

    // ʹ��fgets������gets�İ�ȫ����
    fgets(s, sizeof(s), stdin);

    // ȥ�����з�
    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }

    reverseWords(ptr);
    printf("%s\n", ptr);

    return 0;
}

