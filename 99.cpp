#include<stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 9; i++) { // ���ѭ����������
        // ��ӡ�ո�ʹÿ�еĳ˷����Ҷ���
        for(j = 1; j < i; j++) {
            printf("         "); // ÿ���ո���Ӧ��˷����ʽһ��
        }
        // �ڲ�ѭ���� i �� 9 ��ӡ�˷���
        for(j = i; j <= 9; j++) {
            printf("%d*%d=%-4d ", i, j, i * j);
        }
        putchar('\n'); // ����
    }
    return 0;
}
