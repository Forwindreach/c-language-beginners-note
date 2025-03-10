#include <stdio.h>
#include <math.h> // 使用标准数学库

typedef struct {
double x;
double y;
} Point;//typedef定义的是结构体的类型名字 

/*---返回点 pa 和点 pb 之间的距离---*/
double distance_of(Point pa, Point pb) {
double dx = pa.x - pb.x;
double dy = pa.y - pb.y;
return sqrt(dx * dx + dy * dy); // 正确计算平方根
}

int main(void) {
Point current, dest; // 修正变量名

printf("当前地点的 X 坐标：");
scanf("%lf", &current.x);
printf(" Y 坐标：");
scanf("%lf", &current.y);
printf("目的地的 X 坐标：");
scanf("%lf", &dest.x);
printf(" Y 坐标：");
scanf("%lf", &dest.y);

double distance = distance_of(current, dest);
printf("到目的地的距离为 %.2f\n", distance);

return 0;
}
