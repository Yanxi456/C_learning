#include <stdio.h>
#include <string.h>

int main(){
	char str[80],str_even[41];
	
	gets(str);
	int m=0;
	int len=sizeof(str);
	for(int i=0;i<len;i+=2){
		str_even[m]=str[i];
		m++;
	}
	
	str_even[m]='\0';
	
	puts(str_even);
	return 0;
	
}
