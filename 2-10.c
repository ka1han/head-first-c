/*
 读取两个整数并用实数现实出它们的平均值（类型转换）
*/
#include <stdio.h>

int main(void)
{
  int na, nb;

  puts("请输入两个整数。");
  printf("整数A:"); scanf("%d", &na);
  printf("整数B:"); scanf("%d", &nb);

  printf("它们的平均值是%f。\n", (double) (na + nb) / 2); //类型转换

  return (0);
}
