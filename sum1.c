#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		long long sum=((long long)i+1)*i/2;
		printf("%lld\n",sum);
	}
	return 0;
}
