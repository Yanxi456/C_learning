#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int largest=0,sum=0;
	for(int k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	for (int i=0;i<n;i++){
		if(a[i]>largest) largest = a[i];
	}
	for(int j = 0;j<n;j++){
		if(a[j]!=largest){
			sum+=a[j];
		}
	}
	printf("%d",sum);
	return 0;
}
