//
//  main.c
//  统计数字字符出现的次数
//
//  Created by forwindreach on 2024/11/6.
//

#include <stdio.h>
void count_num(const char s[],int cnt[])
{
    int i = 0;
    while(s[i]){
        if(s[i]>='1'&&s[i]<='9')
            cnt[(s[i]-'0')]++;
        i++;
    }
}
int main(void)
{
    int i;
    int dcnt[10]={0};
    char total[128];
    printf("请输入一串字符");
    scanf("%s",total);
    
    count_num(total,dcnt);
    puts("the times are");
    for(i=0;i<10;i++)
        printf("%d:%d\n",i,dcnt[i]);
    return 0;
}

