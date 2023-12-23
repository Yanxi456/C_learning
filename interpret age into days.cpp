#include <stdio.h>

int main(void) {
	int age;
	int day;
	age = scanf("please input your age");
	day = age * 365;
	printf("You have lived %d days.", day);

	return 0;

}