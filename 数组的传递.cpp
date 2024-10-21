#include<stdio.h>
#define NUMBER 5

int max_total(int v[],int n)
{
	int i;
	int max = v[0];
	for(i=1;i<n;i++){
		if(v[i]>max)
		max = v[i];
	}
	return max;
}
int main(void)
{
	int i;
	int mat[NUMBER];
	int eng[NUMBER];
	int chi[NUMBER];
	int max_e,max_m,max_c;
	
	printf("please inter %d students grades\n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("[%d]math:",i+1);    scanf("%d",&mat[i]);
		printf("[%d]english",i+1);  scanf("%d",&eng[i]);
		printf("[%d]chinese",i+1);  scanf("%d",&chi[i]);
	}
	max_e=max_total(eng,NUMBER);
	max_m=max_total(mat,NUMBER);
	max_c=max_total(chi,NUMBER);
	printf("%d %d %d",max_e,max_m,max_c);
	
	
	return 0;
}
