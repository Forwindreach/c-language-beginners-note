#include<stdio.h>
#define sqr(x)((x)*(x))
int main(void)
{
	int n;
	double x;
	printf("������һ������:");
	scanf("%d",&n);
	printf("����ƽ�����ڣ�%d\n",sqr(n));
	
	printf("������һ��ʵ����");
	scanf("%lf",&x);
	printf("����ƽ����%f",sqr(x));
	return 0;
	 
}

