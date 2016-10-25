/*
  验证：2000以内的正偶数都能分解为两个素数之和（即验证哥德巴赫猜想对2000以内的正偶数成立）
  解析：将整数分解为两部分。改进判断是否为素数的算法，对整数判断“用从2开始到该整数的一半”改为“2开始到该整数的平方根”。
*/

#include <stdio.h>
#include <math.h>
int fflag(int n);
int main(int argc, char const *argv[]) {
  int i,n;
  for(i=4;i<=2000;i+=2)
  {
    for(n=2; n<i; n++)
    {
      if(fflag(n))
        if(fflag(i-n))
        {
          printf("%14d=%d+%d\n",i,n,i-n );
          break;
        }
    }
    if(n==i)
    {
      printf("error %d\n",i );
    }

  }
  return 0;
}


int fflag(int i)  //判断是否为素数
{
  int j;
  if(i<=1)return 0;
  if(i==2)return 1;
  if(!(i%2))return 0;
  for(j=3; j <= (int)(sqrt((double)i) + 1); j+=2)
  {
    if(!(i%j))return 0;
  }
  return 1;
}
