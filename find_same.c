#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	for(int j=0;j<n;j++){
		if(a[j]==x){
			printf("%d",j);
			return 0;
		}
		
		
	}
	printf("-1");
	return 0;
}
