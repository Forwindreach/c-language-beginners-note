#include<stdio.h>
int count(const char s[])
{
	int len = 0;
	while (s[len])
	    len++;
	return len;
}
int main()
{
	char str[128];
	printf("please enter what you want");
	scanf("%s",str);
	
	printf("�ַ���%s�ĳ���ʱ%d",str,count(str));
	return 0;
}
