#include <stdio.h>
#include <math.h>

int main(){
	float n,start,end,pers,total=0.0;
	scanf("%f",&n);
	for(int i=0;i<n;i++){
		scanf("%f %f %f",&start,&end,&pers);
		total=total+1.5*pers+2.0*((sqrt(start*start+end*end))/50.0);
	}
	printf("%d",(int)(total+1));
	return 0;
}
