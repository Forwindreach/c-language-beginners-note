#include<stdio.h>
#define NUMBER 5
void bsort(int a[],int n)
{
	int i,j;//�����������ڱ����ı��� 
	
	for(i=0;i<n-1;i++){//����һ���໥��ϣ��źõ�һ��������������Ҫ������һ�λ��� 
		for(j=n-1; j>i; j--){//��n����ʱ�����һ�����ı��Ϊn-1; 
			if(a[j-1]>a[j]){//���һ��Ԫ���뵹���ڶ���Ԫ�ؽ��бȽ� 
			
			int temp = a[j];//�洢���һ������ֵ 
			a[j]=a[j-1];//��ǰ 
			a[j-1]=temp;//ǰ����
			//������֮��Ľ���ͨ����Ҫ����������������д��� 
		}
		}
		
	}
}
int main(void)//������
{
	int i;//����һ�����ڱ����ı��� 
	int height[NUMBER];//����һ�����ڴ������ݵ�һά���� 
	printf("������%d�˵����:\n",NUMBER);
	for(i=1;i<=NUMBER;i++){
		printf("��%d�ˣ�",i );
		scanf("%d",&height[i-1]);
	}
	//��������ʼ����ð�����򷨣���
	bsort(height,NUMBER);
	puts("����������Ϊ��"); 
	for(i=1;i<=NUMBER;i++){
		printf("��%d:%d\n",i,height[i-1]);
	} 
	
	
	
	return 0;
 } 
