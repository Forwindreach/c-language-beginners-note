#include<stdio.h>
enum{Dog,Cat,Monkey,Invalid};//声明枚举类型 ,实际上整型常量 

void dog(void)//定义无形参的函数 
{
	puts("汪汪");
}
void cat(void)
{
	puts("喵"); 
}
void monkey(void)
{
	puts("鸡鸡"); 
}
int select(void)//后期可以用int型调用枚举型常量，本质上都是整形 
{
	int tmp;
	do{
		printf("0——狗 1——猫 2——猴 3——结束");
		scanf("%d",&tmp);
		 
	}while(tmp<Dog||tmp>Invalid);
	return tmp;
}
int main(void)
{
	int selected;//定义一个枚举变量 
	do{
		switch ((selected)=select()){//存入select函数运算出的枚举常量； 
			case Dog :dog(); break;
			case Cat :cat(); break;
			case Monkey: monkey(); break;
		}
	}while(selected!=Invalid);//用户不选择结束则一直继续 
	return 0;
}
 
