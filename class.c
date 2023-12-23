#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Class {
    char classname[16];
    int start_time;
    int end_time;
};

struct Day {
    struct Class *list[20];
};

// 按照课程的开始时间从早到晚排序
void sortClasses(struct Day *day, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (day->list[j]->start_time > day->list[j + 1]->start_time) {
                // 交换两个课程的指针
                struct Class *temp = day->list[j];
                day->list[j] = day->list[j + 1];
                day->list[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    struct Day day1;

    // 读取课程数量
    scanf("%d", &n);

    // 为每个课程分配内存并读取课程信息
    for (int i = 0; i < n; i++) {
        day1.list[i] = (struct Class *)malloc(sizeof(struct Class));
        scanf("%s", day1.list[i]->classname);
        scanf("%d", &day1.list[i]->start_time);
        scanf("%d", &day1.list[i]->end_time);
    }

    // 按照开始时间排序
    sortClasses(&day1, n);

    // 打印课程信息
    for (int i = 0; i < n; i++) {
        printf("%02d:00 ~ %02d:00 : %s\n", day1.list[i]->start_time, day1.list[i]->end_time, day1.list[i]->classname);
    }

    // 释放为每个课程分配的内存
    for (int i = 0; i < n; i++) {
        free(day1.list[i]);
    }

    return 0;
}

