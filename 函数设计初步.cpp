#include<stdio.h>
void pss(int a)//无返回值的函数声明为void 
{
	while (a-->0)
	putchar('*');
}
int main(void)
{
	int i,len;
	printf("input the lenth:\n");
	scanf("%d",&len);
	for(i=1;i<=len;i++){
		pss(i);
		putchar('\n');
	} 
	
	return 0;
}
