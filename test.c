#include<stdio.h> 

int main(){
	double s,x;
	printf("ÇëÊäÈëx£º");
	scanf("%lf",&x);
	s=1.0;
	if(x>1.0){
		sum(1.0,x,&s);
		printf("s=%10.5lf\n",s);
	}
	else{
		printf("x<1.0, Data Error!");
	}
	return 0;
}
sum(double t,double p, double *a){
	t=t/p;
	if(t>=0.000001)  sum(t,p*p,a);
	*a+=t;
	
}
