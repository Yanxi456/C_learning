#include <stdio.h>
#include <string.h>

int main(){
	int n,ori_arr[1000],count[1000];
	
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&ori_arr[i]);
	}
	for(int i=0;i<n;i++){
		int arr[1000]={0},get=1;
		arr[0]=ori_arr[i];
		for(int j=i;j<n;j++){
			if(ori_arr[j]<arr[get]){
				arr[get++]=ori_arr[j];
			}
		}
		for(int k=0;k<get;k++){
			count[i]+=arr[k];
		}
		
	}
	
	int big=0;
	
	for(int i=0;i<n;i++){
		if(count[i]>big){
			big=count[i];
		}
	}
	
	printf("%d",big);
	return 0;
	
}
