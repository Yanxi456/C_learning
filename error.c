#include <stdio.h>
#include <string.h>

int main(){
	int x=-1;
	char s[4];
	printf("%d\n",x);
	strcpy(s,"SYSU");
	printf("%d\n",&x);
	printf("%d\n",&s);
	printf("%d\n",&s[1]);
	printf("%s",s);
	printf("%d",x);
	return 0;
}
