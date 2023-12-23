#include <stdio.h>
#pragma pack(4)


typedef struct {
	char a[3];
	int b[2];
	short c[5];
} tp;

int main() {
	tp s;
	int len = sizeof(s);
	printf("%d", len);

	return 0;
}
