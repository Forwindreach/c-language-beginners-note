#include<stdio.h>
#define sqr(x)((x)*(x))
int main(void)
{
	int n;
	double x;
	printf("请输入一个整数:");
	scanf("%d",&n);
	printf("他的平方等于：%d\n",sqr(n));
	
	printf("请输入一个实数：");
	scanf("%lf",&x);
	printf("他的平方：%f",sqr(x));
	return 0;
	 
}

