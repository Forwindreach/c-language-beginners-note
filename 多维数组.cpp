#include<stdio.h>
int main()
{
	int i,j;
	int sum[3][4];
	int shuzu1[3][4] = { {34,23,54,43},{65,32,54,43},{87,64,52,34} };
	int shuzu2[3][4] = { {64,42,53,32},{243,543,64,32},{324,342,345,32}};
	
	for(i=0;i<3;i++){
		for(j=0; j<4; j++){
			sum[i][j]=shuzu1[i][j]+shuzu2[i][j];
		}
	}
	puts("total grades:\n");
	for(i=0; i<3; i++){
		for(j=0;j<4;j++)
		printf("%4d",sum[i][j]);
		putchar('\n');
	}
	
	return 0;
}
