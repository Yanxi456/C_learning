#include <stdio.h>
#include <string.h>

struct Student{
	char id[9];
	char name[20];
	int age;
};

int main(){
	struct Student a,b;
	scanf("%s %s %d",&a.name,&a.id,&a.age);
	a.age++;
	printf("%s %s %d\n",a.name,a.id,a.age);
	b=a;
	printf("%s %s %d",b.name,b.id,b.age);
	return 0;
}
