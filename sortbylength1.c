#include <stdio.h>
#include <string.h>

void sortByLength(char *strArray[], int numStrings) {
    int count[100];
    int sort[100];

    // �����ַ����ĳ��Ȳ��洢��count������
    for (int i = 0; i < numStrings; i++) {
        count[i] = strlen(strArray[i]);
    }

    // ��count���鸴�Ƶ�sort������
    for (int i = 0; i < numStrings; i++) {
        sort[i] = count[i];
    }

    // ð�����򣬴Ӵ�С
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = 0; j < numStrings - i - 1; j++) {
            if (sort[j] < sort[j + 1]) {
                // ����sort�����е�Ԫ��
                int temp = sort[j + 1];
                sort[j + 1] = sort[j];
                sort[j] = temp;
            }
        }
    }

    // ����������ַ���
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

    // �����ȡ�ַ��������洢��ptr������
    for (int i = 0; i < n; i++) {
        ptr[i] = malloc(100); // �����㹻�Ŀռ����洢�ַ���
        scanf("%s", ptr[i]);
    }

    // ����������
    sortByLength(ptr, n);

    // �ͷŷ�����ڴ�
    for (int i = 0; i < n; i++) {
        free(ptr[i]);
    }

    return 0;
}

