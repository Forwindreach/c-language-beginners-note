#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	double ndtz = 2;
	puts("欢迎使用标准体重计算\n");
	do {
		printf("请输入您的身高:\n");
		scanf("%d", &a);
		ndtz = ((double)a - 100) * 0.9;
		printf("您的标准体重是；%f\n", ndtz);
		printf("是否继续使用，yes--2, no--1\n");
		scanf("%d", &b);
	} while (b == 2);



	return 0;
}