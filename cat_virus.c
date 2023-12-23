#include <stdio.h>
#define M 0x0003C000

int test_virus(unsigned int V,int T){
	unsigned int V1,V2;
	if (T>6){
		if(((V&M)^M)==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	if (((1<<31)&V)!=0){
		V1 = V<<T;
	}
	else{
		V1 = V<1;
		
	}
	if((1&V)!=0){
		V2 = V>>T;
		
	}
	else{
		V2 = V>>1;
	}
	return test_virus(V1,T+1)||test_virus(V2,T+1);
}

int main(){
	unsigned int n;
	scanf("%u",&n);
	if(test_virus(n,0)){
		printf("yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
