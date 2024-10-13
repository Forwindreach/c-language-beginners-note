#include<stdio.h>
#define A  8
int main(void)
{
	short sum = 0;
	short a;
	short x[A];
	printf("输入学生的成绩\n");
	for(a=0;a<A;a++){
		printf("x[%d]=",a);
		scanf("%d",&x[a]);
		sum += x[a];
	}
/*	printf("the total grade =%d\n",sum);
	printf("the grades in average =%.5f\n",(double)sum/5);
	*/
	short max,min;
	max = min =x[0];
	for(a=0;a<A;a++){
		if(max<=x[a])
		max = x[a];
		if(min>=x[a])
		min = x[a];
	}
	printf("max = %d\n min = %d\n",max,min);
	
}
