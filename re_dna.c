#include <stdio.h>
#include <string.h>

int main(){
	char dna[255];
	char re_dna[255];
	
	gets(dna);
	
	for(int i=0;i<255;i++){
		if(dna[i]=='A'||dna[i]=='G'||dna[i]=='T'||dna[i]=='C'){
			if(dna[i]=='A') re_dna[i]='T';
			if(dna[i]=='T') re_dna[i]='A';
			if(dna[i]=='G') re_dna[i]='C';
			if(dna[i]=='C') re_dna[i]='G';
			
		}
		if(dna[i]=='\0'){
			re_dna[i]='\0'; 
			break;
		}
		
		
	}
	
	puts(re_dna);
	
	return 0;
}
