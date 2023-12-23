#include <stdio.h>
#include <string.h>
#define ROW 3
#define COL 3

void matrixInput(int (*mat)[COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", (*(mat + i) + j));
        }
    }
}

void matrixAddT(int *mat) {
    for (int i = 0; i < ROW; i++) {
        for (int j = i; j < COL; j++) {
            int *element1 = (mat + i * COL + j);
            int *element2 = (mat + j * COL + i);
            int temp = *element1 + *element2;
            *element1 = temp;
            *element2 = temp;
			}
        }
    }


void matrixPrint(int *mat[ROW]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int mat[ROW][COL];

    // 输入矩阵元素
    matrixInput(mat);

    // 调用函数将 mat 与其转置相加
    matrixAddT(&mat[0][0]);
    int *p[ROW] = {NULL, NULL, NULL};
	for (int row = 0; row < ROW; row++)
		*(p + row) = *(mat + row);

    // 打印结果
    matrixPrint(p);

    return 0;
}
