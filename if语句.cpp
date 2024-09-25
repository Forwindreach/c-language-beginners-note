#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	puts("请输入一个整数;\n");
	scanf("%d", &a);

	if (a == 0)
		puts("该整数为0");
	else if (a > 0)
		puts("该整数大于零");
	else if(a<0)
		puts("该整负数");



	return 0;
}