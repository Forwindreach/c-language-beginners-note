#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	puts("����1����0");
	scanf("%d", &a);
	
	switch (a) {
	case 1: puts("��������������1��"); break;
	case 0: puts("�����������������"); break;
	case 3:puts("����һ������");//��break���ʱ��������䵽��һ������ϡ�
	case 4:puts("also a test"); break;
	default:puts("�G�У�ͦ��ǿŶ"); puts("please stop"); break;
	}

	puts("please print a number b");
	scanf("%d", &b);
	puts("please print a number c");
	scanf("%d", &c);
	switch (b) {
	case 1: puts("b=1"); break;
	case 2: puts("b=2"); break;
	case 3: puts("b=3"); break;
	default:if (c == 4)
		c = 9;
		printf("%d", c);



	}


	return 0;
}