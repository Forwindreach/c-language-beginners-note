#include<stdio.h>
#define put_alart(str) (putchar('\a'), puts(str)) 

int main(void) {
    int n;
    printf("please input a number: ");
    scanf("%d", &n);
    
    if (n)
        put_alart("这个数不是0");
    else
        put_alart("这个数是0");
    
    return 0;
}
