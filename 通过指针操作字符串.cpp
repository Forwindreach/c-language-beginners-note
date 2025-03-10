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
 	printf("ÇëÊäÈë×Ö·û´®\n");
 	scanf("%s",str);
 	printf("³¤¶È£º%d",str_lenth(str));
 	return 0;
 }
