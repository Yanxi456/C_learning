#include <stdio.h>

int delete_copy(int a[],int n){
	if(n==0) return 0;
	int m=1;
	for (int i = 1; i<n;i++){
		if(a[i]!=a[m-1]) a[m++]=a[i];
		
	}
	return m;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	} 
	printf("%d\n",delete_copy(a,n));
	for(int j=0;j<delete_copy(a,n);j++){
		printf("%d",a[j]);
	}
	return 0;
}
