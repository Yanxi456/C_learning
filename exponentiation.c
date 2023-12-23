#include <stdio.h>

int exponentiation(int ori_num,int n){
	
	ori_num*=ori_num;
	n--;
	
	if(n==1){
		return ori_num;
	}
	
	
	
	else exponentiation(ori_num,n);
	
}

int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=i;j++){
			printf("%d ^ %d=%d",i,j,exponentiation(i,j));
		}
		printf("\\n");
	}
	return 0;
}
