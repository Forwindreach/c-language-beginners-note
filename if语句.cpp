#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	puts("������һ������;\n");
	scanf("%d", &a);

	if (a == 0)
		puts("������Ϊ0");
	else if (a > 0)
		puts("������������");
	else if(a<0)
		puts("��������");



	return 0;
}