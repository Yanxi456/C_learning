#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *sentence){
	int add_punc_space[100];
	int n=strlen(sentence),count=1;
	add_punc_space[0]=-1;
	\\�ҳ����Ϳո��λ�� 
	for(int i=0;i<n;i++){
		if(issapce(sentence[i])||ispunct(sentence[i])){
			add_punc_space[count++]=i;
		}
	}
	\\���ո�ͱ��֮�е�Ƭ�ν����������У�����ÿ�����ʽ��з�ת 
	for(int i=0;i<count;i++){
		for(int j=0;j>add_punc_space[i]&&j<add_punc_space[i+1];j++){
			int end = add_punc_space[i+1]-1;
			sentence[j]
		}
	}
}

int main(){
	char s[100];
	char *ptr=s;
	gets(s);
	reverseWords(ptr);
	printf("%s",ptr);
	return 0;
}
