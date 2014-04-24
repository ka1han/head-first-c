/*
 读取两个实数值，用实数表示出他们的和、差、积、商
 
 运行结果
 请输入两个数。
 实数vx:40.5
 实数vy:5.2
 vx + vy = 45.700000
 vx - vy = 35.300000
 vx * vy = 210.600000 
 vx / vy = 7.788462
*/

#include <stdio.h>

int main(void)
{
  double vx, vy;

  puts("请输入两个数。");
  printf("实数vx:"); scanf("%lf", &vx);
  printf("实数vy:"); scanf("%lf", &vy);

  printf("vx + vy = %f\n", vx + vy);
  printf("vx - vy = %f\n", vx - vy);
  printf("vx * vy = %f\n", vx * vy);
  printf("vx / vy = %f\n", vx / vy);

  return (0);
}
