#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a = 0;
	do {
		puts("please print a number\n");
		scanf("%d", &a);
	} while (a <= 0);
	while (a > 0) {
		printf("%d", a % 10);
		a /= 10;//ע�⣬������/�����������У�С�������»ᱻʡ��
	}



	return 0;
}