#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n1, n2, max, min;
	printf("请输入n1的值\n");
	scanf("%d", &n1);
	printf("请输入n2的值\n");
	scanf("%d", &n2);
	//max = (n1 > n2) ? n1 : n2;//该行使用条件运算，判断表达式并选择执行n或n2的结果
	//printf("较大的值是：%d", max);

	/*///运用于差值运算
	max = (n1 > n2) ? n1 - n2 : n2 - n1;
	printf("两个数的差值是：%d\n", max);*/

	//复合语句
	if (n1 > n2) {
		max = n1;
		min = n2;

	}//在复合语句中注意大括号，括中需要 执行的结果
	else {
		max = n2;
		min = n1;//注意声明和语句的位置，声明在前
	}
	printf("两个数的差值是：%d\n", max - min);

	return 0;




}