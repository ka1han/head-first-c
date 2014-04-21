/*
 显示读取的整数的最后一位数字
*/

/*
 运行结果（1）
 请输入一个整数：1357
 最后一位是7。

 运行结果（2）
 请输入一个整数：1780
 最后一位是0.
*/

#include <stdio.h>

int main(void)
{
  int no;

  printf("请输入一个整数：");
  scanf("%d", &no);

  printf("最后一位是%d。\n", no % 10);

  return (0);
}
