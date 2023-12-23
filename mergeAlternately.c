#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    int n1=strlen(word1);
    int n2=strlen(word2);
    char *add_word=(char*)malloc((n1+n2)+1);
    int i=0,j=0,k=0;
    while(i<n1&&j<n2){
    	add_word[k++]=word1[i++];
    	add_word[k++]=word2[j++];
	}
	while(i<n1){
		add_word[k++]=word1[i++];
	}
	while(j<n2){
		add_word[k++]=word2[j++];
	}
    add_word[k]='\0';
    return add_word;
}

int main(){
	char word1[100];
	char word2[200];
	char *ptr;
	fgets(word1,sizeof(word1),stdin);
	fgets(word2,sizeof(word2),stdin);
	word1[strcspn(word1, "\n")] = '\0';
	word2[strcspn(word2, "\n")] = '\0';
	ptr=mergeAlternately(word1,word2);
	printf("%s",ptr);
	free(ptr);
	return 0;
}
