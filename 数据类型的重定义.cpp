#define  _CRT_SECURE_NO_WARNINGS//关于scanf的报错处理要放在第一行
#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 2;
	puts("qingshuru1"); scanf("%d", &a);
	puts("qingshuru2"); scanf("%d", &b);
	//printf("两整数的平均数是%f\n", (a + b) / 3.0);//得数为浮点型，可利用隐式类型转换将int类型自动转换为double类型
	printf("两整数的平均数是%f\n", (double)(a + b) / 3);//此处运用类型表达转换式将（a+b）的结果转换为double型
	return 0;

}