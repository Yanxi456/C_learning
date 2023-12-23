#include <stdio.h>

int main(){
	int n,least=0;
	scanf("%d",&n);
	int coins[n];
	for(int i=0;i<n;i++){
		scanf("%d",&coins[i]);
	}
	for(int i=0;i<n;i++){
		if(coins[i]%2==0){
			least+=coins[i]/2;
		}
		else least+=(coins[i]+1)/2;
	}
	printf("%d",least);
}
