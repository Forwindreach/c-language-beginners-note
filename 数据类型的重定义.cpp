#define  _CRT_SECURE_NO_WARNINGS//����scanf�ı�����Ҫ���ڵ�һ��
#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 2;
	puts("qingshuru1"); scanf("%d", &a);
	puts("qingshuru2"); scanf("%d", &b);
	//printf("��������ƽ������%f\n", (a + b) / 3.0);//����Ϊ�����ͣ���������ʽ����ת����int�����Զ�ת��Ϊdouble����
	printf("��������ƽ������%f\n", (double)(a + b) / 3);//�˴��������ͱ��ת��ʽ����a+b���Ľ��ת��Ϊdouble��
	return 0;

}