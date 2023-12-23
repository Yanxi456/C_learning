#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int record[100]={0};
	int remain=n;
	int count=0;
	
	for(int i=0;i<n;i++){
		record[i]=i+1;
	}
	while(remain>1){
		for(int i=0;i<n;i++){
			if(record[i]!=0){
				count++;
				if(count==3){
					record[i]=0;
					count=0;
					remain--;
				}
			}
		}
		
		
	
	}
	for(int i=0;i<n;i++){
		if(record[i]!=0){
			printf("%d",i+1);
		}
	}
	
	return 0;
}
