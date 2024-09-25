//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int c_c = 2024;
int main()
{
	{//变量b生命周期开始
		int b = 9;
		printf("%d\n", b);
	}//变量b生命周期结束


	return 0;



}

