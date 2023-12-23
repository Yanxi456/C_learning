#include <stdio.h>
#define maxn 3



int main(){
	
	int arr[maxn]={1,2,3};
	int *p[maxn]={NULL,NULL,NULL};
	for(int i=0;i<maxn;i++){
		p[i]=&arr[i];
		
	}
	for(int i=0;i<maxn;i++){
		printf("%d",*p[i]);
	}
	return 0;
}
