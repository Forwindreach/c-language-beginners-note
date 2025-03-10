#include<stdio.h>
#include<string.h>
#define NAMELENTH 64//宏定义无分号

struct student{
	char name[NAMELENTH];
	int hight;
	float weight;
	long schop;
	
}; 
int main(void)
{
	struct student dename;
	strcpy(dename.name,"hdchange");
	dename.hight=172;
	dename.weight=53.5;
	dename.schop=25000;
	
	printf("姓名：%s\n",dename.name);
	printf("身高：%d\n",dename.hight);
	printf("体重：%f\n",dename.weight);//看纠正：%lf仅用于双精度浮点型数据的输入，即scanf 
	printf("奖学金：%d\n",dename.schop);

	return 0;
}
