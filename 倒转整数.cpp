#include<stdio.h>
int put_scanf(void)
{
	int ir;
	
	do{
		puts("please inter a integer");
		scanf("%d",&ir);
		if(ir<=0)
		puts("wrong!!!please inter again");
	}while(ir<=0);
	return ir;
}
int put_change(int num)
{
	int ir = 0;
	if(num>0){
		do{
			ir = ir *10 +num % 10;
			num /= 10;
		}while(num > 0);
	}
	return ir;
}
int main(void)
{
	int nx = put_scanf();
	printf("change is : %d\n",put_change(nx));
	return 0;
}
