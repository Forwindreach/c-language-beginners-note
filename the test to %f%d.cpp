#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum;
	double ave;
  	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	sum = a + b + c;
	ave = (double)sum / 3;//将sum由整型转为浮点型
	printf("%d\n", sum);
	printf("%05.1f\n", ave);//规定显示至少五位浮点数（最小字段宽度），小数点后只显示一位，0表示空位用0补齐
	printf("%09.2f\n", ave);
	return 0;
}