#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char findTheDifference(char* s, char* t) {
	int n1=strlen(s),n2=strlen(t);
	int *counts=(int*)malloc(26*sizeof(int)),*countt=(int*)malloc(26*sizeof(int));
	
	memset(counts, 0, 26 * sizeof(int));
    memset(countt, 0, 26 * sizeof(int));
    
	for(int i=0;i<n1;i++){
		for(int j=97;j<123;j++){
			if(s[i]==j) counts[j-97]++;
		}
	}
	for(int i=0;i<n2;i++){
		for(int j=97;j<123;j++){
			if(t[i]==j) countt[j-97]++;
		}
	}
	int dif=-1;
	for(int i=0;i<26;i++){
		if(counts[i]!=countt[i]){
			dif=i;
		}
	}
	char insert=dif+97;
	free(counts);
	free(countt);
	return insert;        
}

int main(){
	char s[1000],t[1000];
	fgets(s,sizeof(s),stdin);
	fgets(t,sizeof(t),stdin);
	s[strcspn(s,"\n")]='\0';
	t[strcspn(t,"\n")]='\0';
char insert  =	findTheDifference(s,t);	
	printf("\"%c\"",insert);
	return 0;
}
