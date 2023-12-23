#include <stdio.h>

int main(){
    int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
		for(int i=0;i<n;i++){
		
		a=a*10%b;
	}


	if(a==b) printf("0");

	else printf("%d",a*10/b);
}
