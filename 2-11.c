/*
 读取三个整数，并显示出它们的合计值和平均值

 运行结果
 整数A:87
 整数B:45
 整数C:59
 它们的合计值是191。
 它们的平均值是63.7。
*/

#include <stdio.h>

int main(void)
{
  int na, nb, nc;
  int sum; //合计值
  double ave; //平均值

  puts("请输入三个整数。");
  printf("整数A:"); scanf("%d", &na);
  printf("整数B:"); scanf("%d", &nb);
  printf("整数C:"); scanf("%d", &nc);

  sum = na + nb + nc;
  ave = (double)sum / 3; //类型转换
 
  printf("它们的合计值是%5d。\n", sum);
  printf("它们的平均值是%5.1f。\n", ave);

  return (0);
}
