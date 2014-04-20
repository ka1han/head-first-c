/*
  编写一段程序，
  像右边这样显示读取到的三个整数的和。
*/

/*
 请输入三个整数。
 整数1:7\n
 整数2:15\n
 整数3:23\n
*/

#include <stdio.h>

int main (void)
{
  int n1, n2, n3;
  int wa; //和

  puts("请输入三个整数。");
  printf("整数1:"); scanf("%d", &n1);
  printf("整数2:"); scanf("%d", &n2);
  printf("整数3:"); scanf("%d", &n3);

  wa = n1 + n2 + n3;

  printf("它们的和是%d。\n", wa);

  return (0);
}
