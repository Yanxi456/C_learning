#include <stdio.h>
#include <string.h>

void myshift(char *s){
	char n=strlen(s),j=0,count=0,k=0;
	char odd[n];
	for(int i=1;i<n;i+=2){
		odd[j++]=*(s+i);
	}
	for(int i=0;i<n;i+=2){
		s[i/2]=s[i];
		count++;
	}
	for(int i=count;i<n;i++){
		s[i]=odd[k++];
	}
}


int main(){
    char s[105];
    scanf("%s",s);
    myshift(s);
    printf("%s",s);
    return 0;
}
