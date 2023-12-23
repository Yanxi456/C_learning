#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int arr[n];
	int *p=arr;
	
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
	}
	
	for(int i=0;i<=n;i++){
		int target=0; 
		for(int j=0;j<n;j++){
			if(*(p+j)==i){
				target+=1;
			}
		}
		if(target==0){
			printf("%d",i);
			return 0;
		}
		
	}
	return 0;
}
