#include<stdio.h>
enum animal {Dog,Cat,Monkey,Invalid};//����ö������ ,ʵ�������ͳ��� 

void dog(void)//�������βεĺ��� 
{
	puts("����");
}
void cat(void)
{
	puts("��"); 
}
void monkey(void)
{
	puts("����"); 
}
enum animal select(void)//���ڿ�����int�͵���ö���ͳ����������϶������� 
{
	int tmp;
	do{
		printf("0������ 1����è 2������ 3��������");
		scanf("%d",&tmp);
		 
	}while(tmp<Dog||tmp>Invalid);
	return (enum animal)tmp;
}
int main(void)
{
	enum animal selected;//����һ��ö�ٱ��� 
	do{
		switch ((selected)=select()){//����select�����������ö�ٳ����� 
			case Dog :dog(); break;
			case Cat :cat(); break;
			case Monkey: monkey(); break;
		}
	}while(selected!=Invalid);//�û���ѡ�������һֱ���� 
	return 0;
}
