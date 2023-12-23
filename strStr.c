#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n1=strlen(haystack),n2=strlen(needle),count=0,loca=-1;
    for(int i=0;i<n1-n2+1;i++){
    	if(haystack[i]==needle[0]){
    		count=0;
    		loca=i;
    		for(int j=0;j<n2;j++){
    			if(haystack[i+j]==needle[j]){
    				count++;
				}
			}
			if(count==n2){
				return loca;
			}
		}
	}
	return -1;
}

int main(){
	char s[1000],t[1000];
	fgets(s,sizeof(s),stdin);
	fgets(t,sizeof(t),stdin);
	s[strcspn(s,"\n")]='\0';
	t[strcspn(t,"\n")]='\0';
	printf("%d",strStr(s,t));
}
