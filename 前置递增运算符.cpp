#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a = 0;
	int i = 0;
	int num = 0;
	int c = 0;
	int t = 0;
	printf("please tell us how many number you will print in\n");
	scanf("%d", &a);
	while (i < a) {
		printf("NO.%d", ++num);//ǰ�õ�����������ñ��ʽ��ֵ��������ֵ
		scanf("%d", &c);
		t += c;
		i++;
		

	}
	printf("the total is:%d,in average is:%.3f\n", t, (double)t / num);


	return 0;
}