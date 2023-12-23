#include <stdio.h>

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


void matrixPrint(int (*mat)[COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}



int main()
{
	int mat[ROW][COL];

	// printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
	matrixInput(mat);

	// call function to add mat with mat.T
	matrixAddT(mat);

	int *p[ROW] = {NULL, NULL, NULL};
	for (int row = 0; row < ROW; row++)
		*(p + row) = *(mat + row);

	// print result
	matrixPrint(p);

	return 0;
}



