#include<stdio.h>
#define NUMBER  5
int top(void);
int i;
int num[5];
int max;
int main()
{
    printf("please inter %d students grades\n",NUMBER);
    for(i=0;i<NUMBER;i++){
    	printf("%d:",i+1);
    	scanf("%d",&num[i]);
    	
	}
	for(i=0;i<NUMBER;i++);
	printf("max = %d",top());
	return 0;
}
int top()
{
	int max = num[0];
	for(i=0;i<NUMBER;i++){
		if(num[i]>max){
			max = num[i];
		}
		
		
	}
	return max;
}
