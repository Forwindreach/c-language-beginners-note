//字符串是双引号括起来的字符
#include<stdio.h>
#include<string.h>
int main()
{
	//字符数组--数组是一组相同类型的元素
	//字符串在结尾的地方隐藏了\0的字符,但是不算入长度中，即不算字符串内容
	char arr1[] = "abcdefg";
	char arr2[] = { 'a','b','d','\0' };
	//单引号一个字符，双引号一串字符
	printf("%s\n",arr1);//%s表示打印字符串
	printf("%s\n",arr2);
	//求字符串长度用strlen--string length
	//报错strlen未定义说明未引用头文件string.h
	int len = strlen(arr1);
	printf("%d\n", len);
	//字符串的结束表示\0很重要

	

	

	return 0;
}