/*
 编写一段程序，像右边这样显示读取到的两个整数的乘积
*/

/*
 请输入两个整数。
 整数1：27\n
 整数2：35\n
*/

#include <stdio.h>

int main(void)
{
  int n1, n2;
  int wa;

  puts("请输入两个整数。");
  printf("整数1:"); scanf("%d", &n1);
  printf("整数2:"); scanf("%d", &n2);

  wa = n1 + n2; //把n1与n2的和赋给变量wa

  printf("它们的和是%d。\n", wa); //显示和

  return (0);
}
