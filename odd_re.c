#include <stdio.h>
#include <string.h>

void oddReverse(char *s){
	int n=strlen(s),j=0,k=0;
	char odd_s[n],re_o[n];
	for(int i=1;i<n;i+=2){
		odd_s[j++]=*(s+i);
	}
	for(int i=n-1;i>=0;i--){
		re_o[n-1-i]=odd_s[i];
		
	}
	re_o[n] = '\0';
	for(int i=1;i<n;i+=2){
		s[i]=re_o[k++];
		
	}
	
	
}

int main(){
    char s[105];
    scanf("%s",s);
    oddReverse(s);
    printf("%s",s);
    return 0;
}
