#include <stdio.h>
#include <string.h>

void sortByLength(char *strArray[], int numStrings){
	int count[100];
	int sort[100];
	for(int i=0;i<numStrings;i++){
		count[i]=strlen(strArray[i]);
	}
	for(int i=0;i<numStrings;i++){
		sort[i]=count[i];
	}
	for(int i=0;i<numStrings-1;i++){
		for(int j=0;j<numStrings-i-1;i++){
			if(sort[j]<sort[j+1]){
				int temp=sort[j+1];
				sort[j+1]=sort[j];
				sort[j]=temp;
			}
		}
	}
	for(int i=numStrings-1;i>=0;i--){
		for(int j=0;j<numStrings;j++){
			if(count[j]==sort[i]){
				printf("%s",strArray[j]);
			}
		}
	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	char *ptr[100];
	for(int i=0;i<n;i++){
		scanf("%s",&ptr[i]);
	}
	sortByLength(ptr,n);

	return 0;
} 
