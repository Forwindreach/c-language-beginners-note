#include<stdio.h>
int str_lenth(char *s)
{
	int len = 0;
	while(*s++)
	len++;
	return len;
 } 
 int main(void)
 {
 	char str[128];
 	printf("�������ַ���\n");
 	scanf("%s",str);
 	printf("���ȣ�%d",str_lenth(str));
 	return 0;
 }
