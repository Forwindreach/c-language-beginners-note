#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum;
	double ave;
  	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	sum = a + b + c;
	ave = (double)sum / 3;//��sum������תΪ������
	printf("%d\n", sum);
	printf("%05.1f\n", ave);//�涨��ʾ������λ����������С�ֶο�ȣ���С�����ֻ��ʾһλ��0��ʾ��λ��0����
	printf("%09.2f\n", ave);
	return 0;
}