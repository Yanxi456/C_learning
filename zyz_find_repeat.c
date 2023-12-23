#include<stdio.h>
#include<string.h>
int main(){
	char a[10000];
    char string[10000];
    int patt[1000];
    int n,i,j,now,max,k,len1,len2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		scanf("%s",string);
		len1=strlen(a);
        len2=strlen(string);
        max=0;
		for(j=0;j<len1;j++){
			if(a[j]==string[0]){
				for(k=j;k<len1;k++){
					if(a[k]==string[(k-j)%len2]){
						now+=1;
					}else
						break;	
				}if(now>=max){
					max=now;	
				}now=0;
				
			}
		}if(max>=len2)
		patt[i]=max;
		else
		patt[i]=0;
	}
	for(i=0;i<n;i++){
		printf("%d\n",patt[i]);
	} 
    return 0;
	}
