#include <stdio.h>
#include <string.h>

int main(){
	char arr[1000],letter;
	int n;
	scanf("%d ",&n);
	for(int i=0;i<n;i++){
		scanf("%c",arr[i]);
	}
	arr[n]='\0';
	scanf("%c",&letter);
	int find[1000],count=0,final[1000];
	for(int i=0;i<n;i++){
		if(arr[i]==letter){
			count++;
			find[count]=i;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<count;j++){
			if(i<=find[j]){
				if(j!=0){
					if(find[j]-i>=i-find[j-1]){
						final[i]=i-find[j-1];
					}
					else final[i]=find[j]-i;
				}
				if(j=0){
					final[i]=find[j]-i;
				}
			}
			if(i>find[j]){
				continue;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",final[i]);
	}
	
	
}
