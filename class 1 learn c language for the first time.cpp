#define _CRT_SECURE_NO_WARNINGS//防止scanf报错
#include<stdio.h>
//int main()
//{
//    //printf("%d\n ,100");
//    printf("%d\n", sizeof(long));
//    return 0;
//}
int main()
{
	int age = 19;
	double weight = 53.5;

	age = age + 1;
    weight = weight + 1;
	printf("%d\n", age);//%d--整型
	printf("%lf\n", weight);//%f--float  %lf--double
	return 0;
	
}



//int a = 100//大括号外的叫全局变量
////当局部变量和全局变量名字冲突时，局部优先
//
//
//int main()
//大括号内的叫局部变量
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = 0;
//	scanf("%d %d", &a, &b);//scanf输入函数
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}



