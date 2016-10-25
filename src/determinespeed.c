/*
  问题：车速固定，司机在上午10点看到里程表读数是一个对称数（从左读和从右读是一样的）95859.两小时后里程表出现一个新的对称数，求车速。
  解析：设所求对称数为i，初值为95589，依次递增取值，将其分解，再与对称位置上的数进行比较，若每个对称位置上的数都相等，即得。
*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int t,a[5];
  long int k,i;
  for(i=95860;;i++)
  {
    for(t=0,k=100000; k>=10; t++)
    {
      a[t] = (i%k) / (k/10);
      k /= 10;
    }
    if((a[0] == a[4]) && (a[1] == a[3]))
    {
      printf("The new symmetrical number kelometers is: %d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4] );
      printf("The velocity of the car is: %.2f\n", (i-95859)/2.0);
      break;
    }

  }
  return 0;
}
