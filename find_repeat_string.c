#include <stdio.h>
#include <string.h>

void compress_string(char *str){
	int m=1,stringsize=sizeof(str);
	if(stringsize<=2||stringsize>=100){
		printf("%s",string);
		return;
	}
	
	char compressed[2*stringsize];
	int compressedIndex=0;
	
	for(int i=0;i<stringsize;i++){
		int currentchar = str[i];
		int count =1;
		while(i+1<len&&str[i+1]==currentchar){
			count++;
			i++;
		}
		compressed[compressedIndex++]=currentchar;
		compressed[compressedIndex++]=(char)(count+'0');
	}
	
	if(sizeof(compressed)>=stringsize){
		printf("%s",str);
	}
	else{
		printf("%s",compressed);
	}
}


int main(){
	int 
	return 0;
}
