//
//  main.c
//  初识指针2
//
//  Created by forwindreach on 2024/11/7.
//

#include <stdio.h>
void mofa(int *height)//此处定义的是指针型变量
{
    if(*height<180)
        *height = 180;
}
int main(void)
{
    int xinan = 179,minze = 185,yanghang = 166;
    printf("%d  %d  %d\n",xinan,minze,yanghang);
    mofa(&yanghang);
    printf("%d  %d  %d\n",xinan,minze,yanghang);
    return 0;
}


