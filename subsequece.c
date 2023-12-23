#include <stdio.h>
#include <stdlib.h>

int main(){
	int size_a,size_b,logic=0,loca=0;
	scanf("%d",&size_a);
	int *a=(int*)malloc(size_a*(sizeof(int)));
	for(int i=0;i<size_a;i++){
		scanf("%d",a+i);
	}
	scanf("%d",&size_b);
	int *b=(int*)malloc(size_b*(sizeof(int)));
	for(int i=0;i<size_b;i++){
		b[i]=scanf("%d",b+i);
	}
	for(int i=0;i<size_a;i++){
		if(a[i]==b[0]){
			loca=i;
			for(int j=0;j<size_b;j++){
				if(a[i+j]==b[j]){
					logic++;
				}
			}
			if(logic==size_b){
				break;
			}
			else{
				logic=0;
			}
			
		}
	}
	if(logic==size_b){
		printf("Yes,%d",loca);
	}
	if(logic<size_b){
		printf("No");
	}
	
	free(a);
	free(b);
	return 0;
}
