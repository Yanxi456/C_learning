#include <stdio.h>
#include <string.h>

int cmpfunc(const int *a,const int *b){
	return (*(int*)b-*(int*)a);
}
int main(){
	int n=5;
	int arr[5]={5,3,4,2,1};
	qsort(arr,5,sizeof(int),cmpfunc);
	printf("排序后的数组");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
	
}
