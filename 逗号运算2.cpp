#include<stdio.h>
#define put_alart(str) (putchar('\a'), puts(str)) 

int main(void) {
    int n;
    printf("please input a number: ");
    scanf("%d", &n);
    
    if (n)
        put_alart("���������0");
    else
        put_alart("�������0");
    
    return 0;
}
