#include <stdio.h>

int main(){
	int n,target;
	scanf("%d",&n);
	int arr[n];
	int *p=arr;
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
	}
	
	scanf("%d",&target);
	
	for(int i=0;i<n;i++){
		if(target==*(p+i)){
			printf("%d",i);
			return 0;
		}
		
	
	}
	printf("-1");
	return 0;
}
