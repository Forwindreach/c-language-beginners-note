#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	double ndtz = 2;
	puts("��ӭʹ�ñ�׼���ؼ���\n");
	do {
		printf("�������������:\n");
		scanf("%d", &a);
		ndtz = ((double)a - 100) * 0.9;
		printf("���ı�׼�����ǣ�%f\n", ndtz);
		printf("�Ƿ����ʹ�ã�yes--2, no--1\n");
		scanf("%d", &b);
	} while (b == 2);



	return 0;
}