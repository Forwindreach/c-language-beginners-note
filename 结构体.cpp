#include<stdio.h>
#include<string.h>
#define NAMELENTH 64//�궨���޷ֺ�

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
	
	printf("������%s\n",dename.name);
	printf("��ߣ�%d\n",dename.hight);
	printf("���أ�%f\n",dename.weight);//��������%lf������˫���ȸ��������ݵ����룬��scanf 
	printf("��ѧ��%d\n",dename.schop);

	return 0;
}
