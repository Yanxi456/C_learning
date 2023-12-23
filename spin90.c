#include <stdio.h>



void rotate(int**matrix,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int temp;
			temp=matrix[j][i];
			matrix[j][i]=matrix[i][j];
			matrix[i][j]=temp;
			
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			int temp;
			temp=matrix[i][n-1-j];
			matrix[i][n-1-j]=matrix[i][j];
			matrix[i][j]=temp;
		}
	}



}


int main() {
	int n;
	scanf("%d",&n);
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) 
        matrix[i] = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            scanf("%d",&matrix[i][j]);
            
    rotate(matrix, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            printf("%d ", matrix[i][j]);
		printf("\n");
	}
    for (int i = 0; i < n; i++) 
        free(matrix[i]);
    free(matrix);

    return 0;
}
