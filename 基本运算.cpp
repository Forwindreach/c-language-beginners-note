#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int vx, vy;
	puts("������Ϊ����������");
	printf("������һ������ֵx\n");//�����ڵĳ�Ϊ�ַ�������
	scanf_s("%d", &vx);
	printf("��������һ������ֵy\n");
	scanf_s("%d", &vy);

	printf("�������ĳ˻��ǣ�%d\n", vx * vy);
	printf("������֮���ǣ�%d\n", vx - vy);
	printf("vx/vy��;%d\n", vx / vy);//�ó�������ֻ���̵���������
	printf("vx%%vy = %d", vx % vy);//����ʽ���ַ����ڳ�������%ʱ��ֻ��ʾһ����%������

	puts("��Ա������������");

	
	

	return 0;



}