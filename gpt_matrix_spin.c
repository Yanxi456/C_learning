#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // 定义原始矩阵和转置矩阵
    int A[n][m], AT[m][n];

    // 输入原始矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 计算转置矩阵
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            AT[i][j] = A[j][i];
        }
    }

    // 输出转置矩阵
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", AT[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

