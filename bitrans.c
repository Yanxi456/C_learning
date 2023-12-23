#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxlen 100


char *addBinary(char *a, char *b){
	int len_a=strlen(a);
	int len_b=strlen(b);
	int carry=0;
	int len_sum=(len_a>len_b?len_a:len_b);
	char *sum=malloc(len_sum+2);
	for(int i=0;i<len_sum+2;i++){
		sum[i]=0;
	}
	for(int i=0;i<len_sum;i++){
		int s=carry+(i>len_a?0:*(a+len_a-i-1)-'0')+(i>len_b?0:*(b+len_b-i-1)-'0');
		carry=s>>1;
		s=s&1;
		sum[i]='0'+s;
	} 
	if(carry) sum[len_sum++]='1';
	for(int i=0;i<len_sum/2;i++){
		char ch=*(sum+i);
		*(sum+i)=*(sum+len_sum-1-i);
		*(sum+len_sum-1-i)=ch; 
	}
	return sum;
}

int main(){
	char *a=malloc(maxlen*sizeof(char));
	char *b=malloc(maxlen*sizeof(char));
	scanf("%s",a);
	scanf("%s",b);
	char *p=addBinary(a,b);
	puts(p);
	free(a);
	free(b);
	free(p);

	return 0;
}
