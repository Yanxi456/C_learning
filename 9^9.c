#include <stdio.h>

int multiple_n(int ori_n,int n){
	int temp=ori_n;
	for(int i=0;i<n;i++){
		ori_n*=temp;
	}
	return ori_n;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ^ %d = %d ",i,j,multiple_n(i,j-1));
		} 
		printf("\n");
	}
	
	return 0;
} 
