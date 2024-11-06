//
//  main.c
//  显示字符串
//
//  Created by forwindreach on 2024/11/6.
//

#include <stdio.h>
void put_ch(const char s[])
{
    int i = 0;
    while(s[i])
        putchar(s[i++]);
    putchar('\n');
}
int main(void)
{
    char str[128];
    printf("please input string");
    scanf("%s",str);
    
    printf("the string is\n");
    put_ch(str);
    return 0;
}


