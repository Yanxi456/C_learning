#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *st){
	char removed[100]={'\0'};
	int len_st=strlen(st),len=0;
	for(int i=0;i<len_st;i++){
		if(isalnum(st[i])){
			removed[len++]=tolower(st[i]);
		}
	}
	for(int i=0;i<len/2;i++){
		if(removed[i]!=removed[len-1-i]) return 0;
	}
	return 1;
}

int main(){
	char str[100];
	gets(str);
	int len_f=strlen(str);
	if(isPalindrome(str)){
		printf("是回文字符");
	}
	else printf("不是回文字符");
	return 0;
} 
