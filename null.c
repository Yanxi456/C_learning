#include<stdio.h>
int main() {
	int a = 10;
	int *p = NULL;
	if (p) {
	printf("*p=%d\n",*p);
	}
	else {
	printf("NULL pointer!");
	}
	return 0;
}
