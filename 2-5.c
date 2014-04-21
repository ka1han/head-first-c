/*
 读取两个整数，显示它们的平均值
 
 运行结果
 请输入两个整数。
 整数A：40
 整数B：45
 它们的平均值是42.
*/

#include <stdio.h>

int main(void)
{
  int na, nb;

  puts("请输入两个整数。");
  printf("整数A："); scanf("%d", &na);
  printf("整数B："); scanf("%d", &nb);

  printf("它们的平均值是%d。\n", (na + nb) / 2);

  return (0);
}
