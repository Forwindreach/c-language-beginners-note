//�ַ�����˫�������������ַ�
#include<stdio.h>
#include<string.h>
int main()
{
	//�ַ�����--������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β�ĵط�������\0���ַ�,���ǲ����볤���У��������ַ�������
	char arr1[] = "abcdefg";
	char arr2[] = { 'a','b','d','\0' };
	//������һ���ַ���˫����һ���ַ�
	printf("%s\n",arr1);//%s��ʾ��ӡ�ַ���
	printf("%s\n",arr2);
	//���ַ���������strlen--string length
	//����strlenδ����˵��δ����ͷ�ļ�string.h
	int len = strlen(arr1);
	printf("%d\n", len);
	//�ַ����Ľ�����ʾ\0����Ҫ

	

	

	return 0;
}