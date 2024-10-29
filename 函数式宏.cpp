#include<stdio.h>
#define sum(x) ((x)*(x))//注意不要再m和（间插入空格，否则变成对象式宏，无法进行赋值 
int main()
{
	printf("%d",sum(5));
	return 0;
	
}
