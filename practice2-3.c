/*
 编写一段程序，像下边那样显示出读取的实数的值。

 请输入一个实数: 57.3
 你输入的是57.300000。
*/

#include <stdio.h>

int main(void)
{
  double n;

  printf("请输入一个实数:", n); scanf("%lf", &n);
  printf("您输入的是:%lf\n", n);

  return(0);
}
