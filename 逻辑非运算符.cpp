#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int hand = 1;
	do {
		printf("���������Ҫ��ʲô��ʯͷ����1����������2��������3\n");
		scanf("%d", &hand);
	} while (!(1 <= hand && 3 >= hand));
	
		switch (hand) {
		case 1: puts("�������ʯͷ"); break;
		case 2: puts("������Ǽ���"); break;
		case 3: puts("������ǲ�"); break;
		default: puts("it is not funny,please try again"); 

		}

	return 0;
}