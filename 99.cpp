#include<stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 9; i++) { // 外层循环控制行数
        // 打印空格，使每行的乘法表右对齐
        for(j = 1; j < i; j++) {
            printf("         "); // 每个空格宽度应与乘法表达式一致
        }
        // 内层循环从 i 到 9 打印乘法项
        for(j = i; j <= 9; j++) {
            printf("%d*%d=%-4d ", i, j, i * j);
        }
        putchar('\n'); // 换行
    }
    return 0;
}
