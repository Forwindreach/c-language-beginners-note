#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n1, n2, max, min;
	printf("������n1��ֵ\n");
	scanf("%d", &n1);
	printf("������n2��ֵ\n");
	scanf("%d", &n2);
	//max = (n1 > n2) ? n1 : n2;//����ʹ���������㣬�жϱ��ʽ��ѡ��ִ��n��n2�Ľ��
	//printf("�ϴ��ֵ�ǣ�%d", max);

	/*///�����ڲ�ֵ����
	max = (n1 > n2) ? n1 - n2 : n2 - n1;
	printf("�������Ĳ�ֵ�ǣ�%d\n", max);*/

	//�������
	if (n1 > n2) {
		max = n1;
		min = n2;

	}//�ڸ��������ע������ţ�������Ҫ ִ�еĽ��
	else {
		max = n2;
		min = n1;//ע������������λ�ã�������ǰ
	}
	printf("�������Ĳ�ֵ�ǣ�%d\n", max - min);

	return 0;




}