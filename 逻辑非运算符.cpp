#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int hand = 1;
	do {
		printf("请告诉我你要出什么：石头——1，剪刀——2，布——3\n");
		scanf("%d", &hand);
	} while (!(1 <= hand && 3 >= hand));
	
		switch (hand) {
		case 1: puts("你出的是石头"); break;
		case 2: puts("你出的是剪刀"); break;
		case 3: puts("你出的是布"); break;
		default: puts("it is not funny,please try again"); 

		}

	return 0;
}