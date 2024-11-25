//
//  main.c
//  99
//
//  Created by forwindreach on 2024/11/25.

//阶乘算法
//#include<stdio.h>
//extern int func(int);
//int main(void)
//{
//    int x;
//    scanf("%d",&x);
//    int p;
//    p = func(x);
//    printf("%d",p);
//    return 0;
//}
//int func(int n)
//{
//    if(n!=1)
//    {
//        n=n*func(n-1);
//        return n;
//    }
//
//    return n;
//    
//}
#include <stdio.h>
// 修正后的函数声明，明确参数类型
extern int func(int);

int main(void)
{
    int x;
    scanf("%d", &x);
    int p;
    p = func(x);
    printf("%d", p);
    return 0;
}

int func(int n)
{
    if (n > 1) {
        return n * func(n - 1);
    }
    return 1;
}
