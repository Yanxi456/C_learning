#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students (n <= 100): ");
    scanf("%d", &n);

    int students[100];
    for (int i = 0; i < n; i++) {
        students[i] = i + 1; // 初始化学生编号
    }

    int count = 0;
    int remaining = n;
    int index = 0;

    while (remaining > 1) {
        for (int i = 0; i < n; i++) {
            if (students[i] != 0) {
                count++;
                if (count == 3) {
                    students[i] = 0; // 学生退出
                    count = 0; // 重置计数器
                    remaining--; // 更新剩余学生数量
                }
            }
        }
    }

    // 输出剩下的学生编号
    for (int i = 0; i < n; i++) {
        if (students[i] != 0) {
            printf("The last student remaining is: %d\n", students[i]);
            break;
        }
    }

    return 0;
}

