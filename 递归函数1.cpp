#include<stdio.h>
int jeichen(int n)
{
	if(n>0)
	return n*jeichen(n-1);
	else
	return 1;
}
int main(void)
{
	int num;
	
	printf("请输入一个整数：");
	scanf("%d",&num);
	printf("%d的阶乘为%d",num,jeichen(num));	
	return 0;
}
