#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("please print a number\n");
	scanf("%d", &a);
	while (a >= 0) {
		printf("%d\n", a--);//�ɴ˿ɼ����õ����ݼ��������ֵ������ǰ��ֵ
		
	}

	return 0;
}