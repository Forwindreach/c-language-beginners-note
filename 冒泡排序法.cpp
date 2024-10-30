#include<stdio.h>
#define NUMBER 5
void bsort(int a[],int n)
{
	int i,j;//定义两个用于遍历的变量 
	
	for(i=0;i<n-1;i++){//与下一行相互配合，排好第一个数，该数则不需要参与下一次互换 
		for(j=n-1; j>i; j--){//有n个数时，最后一个数的标号为n-1; 
			if(a[j-1]>a[j]){//最后一个元素与倒数第二个元素进行比较 
			
			int temp = a[j];//存储最后一个数的值 
			a[j]=a[j-1];//后换前 
			a[j-1]=temp;//前换后
			//两个量之间的交换通常需要定义第三个变量进行储存 
		}
		}
		
	}
}
int main(void)//主函数
{
	int i;//定义一个用于遍历的变量 
	int height[NUMBER];//定义一个用于储存数据的一维数组 
	printf("请输入%d人的身高:\n",NUMBER);
	for(i=1;i<=NUMBER;i++){
		printf("第%d人：",i );
		scanf("%d",&height[i-1]);
	}
	//接下来开始排序（冒泡排序法）、
	bsort(height,NUMBER);
	puts("按升序排列为："); 
	for(i=1;i<=NUMBER;i++){
		printf("第%d:%d\n",i,height[i-1]);
	} 
	
	
	
	return 0;
 } 
