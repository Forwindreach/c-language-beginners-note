//循环语句
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)//当line小于30000时一直重复whlie大括号内局部代码
	{
		printf("学习编程，写代码:%d\n",line);
		line++;//不够30000就加1

	}
	if (line == 30000)
	{
		printf("大厂offer\n");
	}
	return 0;

}