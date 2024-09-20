//初步认识选择语句
#define _CRT_SECURE_NO_WARNINGS//防止canf
#include<stdio.h>

int main()
{
	int open = 0;
	printf("加入比特\n");
	printf("你要好好学习吗(1/0)");
	scanf("%d", &open);

	if (open == 1)//选择语句，用于判断
	{
		printf("大厂offer\n");
	}
	else
	{
		printf("码农烧烤\n");
	}
	
	return 0;
}