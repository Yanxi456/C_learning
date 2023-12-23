#include <stdio.h>
#include <string.h>

void oddReverse(char *s) {
	int n=strlen(s);
	if(n%2==1){
		char *p =s+1;
		char *q =s+n-2;
		while(p<q){
			char temp=*p;
			*p=*q;
			*q=temp;
			p+=2;
			q-=2;
		}
	} 
	if(n%2==0){
		char *p =s+1;
		char *q =s+n-1;
		while(p<q){
			char temp=*p;
			*p=*q;
			*q=temp;
			p+=2;
			q-=2;
		}
	} 



}

int main() {
    char s[105];
    scanf("%s", s);
    oddReverse(s);
    printf("%s", s);
    return 0;
}

