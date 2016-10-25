/*
  问题：100! 的尾数有多少个0？
  解析：数学上分析100!结果值的末尾产生零的条件——一个整数有一个因子5，则100!的计算必然产生一个0；若整数N能被25整除，则N包含2个因子5。
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,count = 0;
  for(a=5;a<=100;a+=5)
  {
    ++count;
    if(!(a%25)) ++count;

  }
  printf("The number of 0 in the end of 100! is: %d.\n",count );
  return 0;
}
