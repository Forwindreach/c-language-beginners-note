#include <stdio.h>
#include <math.h> // ʹ�ñ�׼��ѧ��

typedef struct {
double x;
double y;
} Point;//typedef������ǽṹ����������� 

/*---���ص� pa �͵� pb ֮��ľ���---*/
double distance_of(Point pa, Point pb) {
double dx = pa.x - pb.x;
double dy = pa.y - pb.y;
return sqrt(dx * dx + dy * dy); // ��ȷ����ƽ����
}

int main(void) {
Point current, dest; // ����������

printf("��ǰ�ص�� X ���꣺");
scanf("%lf", &current.x);
printf(" Y ���꣺");
scanf("%lf", &current.y);
printf("Ŀ�ĵص� X ���꣺");
scanf("%lf", &dest.x);
printf(" Y ���꣺");
scanf("%lf", &dest.y);

double distance = distance_of(current, dest);
printf("��Ŀ�ĵصľ���Ϊ %.2f\n", distance);

return 0;
}
