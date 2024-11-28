//
//  main.c
//  998
//
//  Created by forwindreach on 2024/11/27.
//

#include <stdio.h>

// 修正move函数参数为字符类型
void move(char from, char to)
{
    printf("%c->%c\n", from, to);
}

// 汉诺塔递归函数
void hanoi(int n, char A, char B, char C)
{
    if (n == 1)
        move(A, C);
    else {
        hanoi(n - 1, A, C, B);
        move(A, C);
        hanoi(n - 1, B, A, C);
    }
}

int main(void)
{
    int x;
    char A = 'A', B = 'B', C = 'C';
    printf("请输入圆盘的数量: ");
    scanf("%d", &x);
    hanoi(x, A, B, C);
    return 0;
}
