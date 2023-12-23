#include <stdio.h>
#include <string.h>

char Roman_table[13][10]={"CM", "CD", "XC", "XL", "IX", "IV", "M", "D", "C", "L", "X", "V", "I"};
int digit_table[13]={900, 400, 90, 40, 9, 4, 1000, 500, 100, 50, 10, 5, 1};

int roman2int_table(char *roman){
	int len=strlen(roman),num=0;
	for(int i=0;i<len;){
		for(int j=0;j<13;j++){
			if(strncmp(roman+i,Roman_table[j],strlen(Roman_table[j]))==0){
				num+=digit_table[j];
				i+=strlen(Roman_table[j]);
				break;
			}
		}
		
	}
	return num;
}


int main(){
	char s[100];
	gets(s);
	printf("罗马数字转换为：%d",roman2int_table(s));
	
	
	return 0;
}
