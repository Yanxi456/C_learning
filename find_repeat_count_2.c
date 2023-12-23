#include <stdio.h>
#include <string.h>

int main(){
	char str_o[10000];
	char str_r[10000];
	int  count[10000];
	int n,len1,len2;
	int max,present=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",str_o);
		scanf("%s",str_r);
		len1=strlen(str_o);
	    len2=strlen(str_r);
	    max=0;
	    for(int k=0;k<len1;k++){
		    if(str_o[k]==str_r[0]){
			    for(int j=0;k+j<len1;j++){
				    if(str_o[k+j]==str_r[j%len2]){
					present++;
					}
				    else{
					    break;
				    }
				
				}
				if(present>=max){
					max=present;
				}
					present = 0;
				}
			if(max>=len2){
				count[i]=max;
			}
			else{
				count[i]=0;
			}
		
	}
	
		
	}
	for(int i=0;i<n;i++){
		printf("%d\n",count[i]);
	}
	
	return 0;
	
	
	
}
