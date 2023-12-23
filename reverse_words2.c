#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseSubstring(char *str, int start, int end){
	while(start<end){
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
}

void reverseWords(char *sentence){
	int n=strlen(sentence);
	int start=0,end=0;
	while(end<=n){
		if(isspace(sentence[end])||ispunct(sentence[end])||sentence[end]=='\0'){
			reverseSubstring(sentence,start,end-1);
			start=end+1;
		}
		end++;
	}
}

int main(){
	char s[100];
	char *ptr=s;
	fgets(s,sizeof(s),stdin);
	
	if(s[strlen(s)+1]=='\n'){
		s[strlen(s)+1]=='\0';
	}
	
	reverseWords(ptr);
	
	printf("%s",ptr);
	return 0;
	
}
