#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int F,B;
		scanf("%d %d",F,B);
		while(F!=0&&B!=0){
			if(F>=B){
				F/=2;
			}
			if(F<B) F+=1;
			if(B<F) B++;
			if(B>=F) B/=2;
			
		}
		printf("%d %d",F,B);
		
	}
	return 0;
}
