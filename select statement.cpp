//������ʶѡ�����
#define _CRT_SECURE_NO_WARNINGS//��ֹcanf
#include<stdio.h>

int main()
{
	int open = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��(1/0)");
	scanf("%d", &open);

	if (open == 1)//ѡ����䣬�����ж�
	{
		printf("��offer\n");
	}
	else
	{
		printf("��ũ�տ�\n");
	}
	
	return 0;
}