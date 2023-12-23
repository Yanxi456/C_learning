#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='\\') str[i]='\0';
	}
	puts(str);
	return 0;
}
