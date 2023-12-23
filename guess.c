#include <stdio.h>

int main(){
	int put,guess,trans;
	scanf("%d %d",&put,&guess);
	if(put%2==0&&put%3!=0){
		trans=(put+2)%100;
	}
	if(put%3==0&&put%2!=0){
		trans=(put+3)%100;
	}
	if(put%3==0&&put&2==0){
		trans=(put+5)%100;
	}
	if(put%3!=0&&put%2!=0){
		trans=put;
	}
	if(trans==guess){
		printf("Yes!");
		
	}
	if(trans!=guess){
		printf("No!");
	}
} 
