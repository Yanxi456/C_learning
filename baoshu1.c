#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students (n <= 100): ");
    scanf("%d", &n);

    int students[100];
    for (int i = 0; i < n; i++) {
        students[i] = i + 1; // ��ʼ��ѧ�����
    }

    int count = 0;
    int remaining = n;
    int index = 0;

    while (remaining > 1) {
        for (int i = 0; i < n; i++) {
            if (students[i] != 0) {
                count++;
                if (count == 3) {
                    students[i] = 0; // ѧ���˳�
                    count = 0; // ���ü�����
                    remaining--; // ����ʣ��ѧ������
                }
            }
        }
    }

    // ���ʣ�µ�ѧ�����
    for (int i = 0; i < n; i++) {
        if (students[i] != 0) {
            printf("The last student remaining is: %d\n", students[i]);
            break;
        }
    }

    return 0;
}

