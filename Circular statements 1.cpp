//ѭ�����
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)//��lineС��30000ʱһֱ�ظ�whlie�������ھֲ�����
	{
		printf("ѧϰ��̣�д����:%d\n",line);
		line++;//����30000�ͼ�1

	}
	if (line == 30000)
	{
		printf("��offer\n");
	}
	return 0;

}