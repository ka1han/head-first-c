/*
 读取两个整数，显示他们的商和余数
 
 运行结果
 请输入两个整数。
 整数A：57
 整数B：21
 A除以B得2余15
*/

#include <stdio.h>

int main(void)
{
  int na, nb;

  puts("请输入两个整数。");
  printf("整数A:"); scanf("%d", &na);
  printf("整数B:"); scanf("%d", &nb);

  printf("A除以B得%d余%d。\n", na / nb, na % nb);

  return (0);
}
