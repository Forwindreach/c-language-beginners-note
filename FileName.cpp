#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	
	printf("please print a number\n");
	scanf("%d", &a);
	for (b = 0; b <= a; b++)
		
		printf("%d", b);//ִ�����
	putchar('\n');
	
	return 0;
}