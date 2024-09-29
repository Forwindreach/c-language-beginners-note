#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("please print a number\n");
	scanf("%d", &a);
	while (a >= 0) {
		printf("%d\n", a--);//由此可见后置递增递减运算符的值是增减前的值
		
	}

	return 0;
}