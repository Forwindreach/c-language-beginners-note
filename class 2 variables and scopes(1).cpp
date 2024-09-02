#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int c_c = 2024;
int main()
{
	{//变量a生命周期开始
		int b = 9;
		printf("%d\n", b);
	}//变量a生命周期结束


	return 0;



}

