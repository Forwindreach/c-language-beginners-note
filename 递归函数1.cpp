#include<stdio.h>
int jeichen(int n)
{
	if(n>0)
	return n*jeichen(n-1);
	else
	return 1;
}
int main(void)
{
	int num;
	
	printf("������һ��������");
	scanf("%d",&num);
	printf("%d�Ľ׳�Ϊ%d",num,jeichen(num));	
	return 0;
}
