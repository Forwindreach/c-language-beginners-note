//
//  main.c
//  test
//
//  Created by forwindreach on 2024/11/28.
//

#include <stdio.h>
int gcd(int x,int y)
{
    return y?gcd(y,x%y):x;//欧几里德算法（递归）
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
