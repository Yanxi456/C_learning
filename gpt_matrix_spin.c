#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // ����ԭʼ�����ת�þ���
    int A[n][m], AT[m][n];

    // ����ԭʼ����
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // ����ת�þ���
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            AT[i][j] = A[j][i];
        }
    }

    // ���ת�þ���
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

