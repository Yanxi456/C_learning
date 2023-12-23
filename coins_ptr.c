#include <stdio.h>

int main(){
	int n,least;
	scanf("%d",&n);
	int coins[n];
	int *p=coins;
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
	}
	
	for(int i=0;i<n;i++){
		
		if(coins[i]%2==0){
			least+=coins[i]/2;
		}
		else{
			least+=(coins[i]+1)/2;
		}
	}
	printf("%d",least);
}
