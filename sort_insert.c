#include <stdio.h>
#include <stdlib.h>

int main(){
	int ready,total,arr[100];
	scanf("%d",&ready);
	scanf("%d",&total);
	for(int i=0;i<total;i++){
		scanf("%d",&arr[i]);
	}
	arr[total++]=ready;
	for(int i=0;i<total-1;i++){
		for(int j=0;j<total-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<total;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
