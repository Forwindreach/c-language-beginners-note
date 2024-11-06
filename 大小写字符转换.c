//
//  main.c
//  大小写字符转换
//
//  Created by forwindreach on 2024/11/6.
//

#include <stdio.h>
#include <ctype.h>

void trans_up(char s[])
{
    int i= 0;
    while (s[i]){
        s[i] = toupper(s[i]);
        i++;
    }
}
void trans_low(char s[])
{
    int i = 0;
    while(s[i]){
        s[i] = tolower(s[i]);
        i++;
    }
}
int main(void)
{
    char box[128];
    printf("please input in free\n");
    scanf("%s",box);
    trans_up(box);
    printf("大写字母版:%s\n",box);
    trans_low(box);
    printf("小写字母版：%s\n",box);
    
    
    return 0;
}

