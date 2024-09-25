#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int vx, vy;
	puts("本程序为基础计算器");
	printf("请输入一个整数值x\n");//“”内的称为字符串常量
	scanf_s("%d", &vx);
	printf("请输入另一个整数值y\n");
	scanf_s("%d", &vy);

	printf("两整数的乘积是：%d\n", vx * vy);
	printf("两整数之差是：%d\n", vx - vy);
	printf("vx/vy是;%d\n", vx / vy);//该出发运算只记商的整数部分
	printf("vx%%vy = %d", vx % vy);//当格式化字符串内出现两个%时，只显示一个，%求余数

	puts("请对本软件做出评价");

	
	

	return 0;



}