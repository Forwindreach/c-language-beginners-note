#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	short i;
	short x[7];

	for (i = 0; i < 7; i++) {
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}
	for (i = 0; i < 3; i++) {
		short temp = x[i];
		x[i] = x[6 - i];
		x[6 - i] = temp;
	}
	for (i = 0; i < 7; i++) {
		printf("x[%d]=%d\n", i, x[i]);
	}
	return 0;
}