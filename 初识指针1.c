//
//  main.c
//  初识指针1
//
//  Created by forwindreach on 2024/11/7.
//

#include <stdio.h>
void zhizhen(int n1,int n2,int *sum,int *cha)
{
    *sum = n1+n2;
    *cha = n1>n2?n1-n2:n2-n1;
}
int main(void)
{
    int n1,n2,wa,wb;
    printf("please input two number");
    scanf("%d %d",&n1,&n2);
    zhizhen(n1,n2,&wa,&wb);//指针指向的是地址
    printf("sum=%d,cha=%d\n",wa,wb);
    
    return 0;
}

