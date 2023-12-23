#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			printf("%d",n);
			n/=2;
			printf("/2=%d\n",n);
			
		}
		
		else{
			printf("%d",n);
			n=n*3+1;
			printf("*3+1=%d\n",n);
		}
	}
	printf("End");
	return 0;
}
