#include <stdio.h>
#include <string.h>

int find_1st_appear(char origin_str[], char repeat_str[],int target[]) {
	int cor;
	
	int count1=0;
    for (int i = 0; i < strlen(origin_str); i++) {
        if (origin_str[i] == repeat_str[0]) {
        	for(int j=0;j< strlen(repeat_str);j++){
        		if(origin_str[i+j]==repeat_str[j]){
        			cor=1;
				}
				else{
					cor=0;
					break;
				}
        		
			}
        }
        if(cor==1){
        	target[count1++]=i;
		}
		
    }
    return -1;  // Return -1 if not found
    
}


int find_repeat_count(char origin_str[], char repeat_str[],int n,int target[]) {
    int n1 = strlen(origin_str), n2 = strlen(repeat_str), count = 0;
    
    int fst_ap = target[n];
    int m=0,re;
    
    
    
    if(fst_ap==-1) return 0;
    for(int i=fst_ap;i<n2+fst_ap&&m<n2;i++){
    	if(origin_str[i]==repeat_str[m++]){
    		 re=1;
    		 
		}
		else {
			 re=0;
		}
	}
	if(re){
		count+=n2;
		
	}

	int cir=0;
	int fst_la=fst_ap+n2;
	for(int i=fst_la;i<n1&&origin_str[i]==repeat_str[cir%n2];i++){
		
		cir++;
		count++;
		
		
	}
	return count;
	
}

    
    

void create_str(int n ,int target[]){
	char str_o[n][10000];
	char str_r[n][10000];
	int max;
	
	
	for(int i=0;i<n;i++){
		scanf("%s",str_o[i]);
		scanf("%s",str_r[i]);
	}
	for(int i=0;i<n;i++){
		int max = find_repeat_count(str_o[i],str_r[i],0,target);
		for(int j=0;j<sizeof(target);j++){
			if(find_repeat_count(str_o[i],str_r[i],j+1,target)>find_repeat_count(str_o[i],str_r[i],j,target)){
				max=find_repeat_count(str_o[i],str_r[i],j+1,target);
			}
			
		}
		printf("%d\n",max);
	}
}

int main(){
	int n;
	int target[10000]={};
	scanf("%d",&n);
	create_str(n,target);
	return 0;
}

