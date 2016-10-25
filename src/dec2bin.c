#include <stdio.h>
void printb(int,int);
int main(int argc, char const *argv[]) {
  int x;
  printf("Input a number:");
  scanf("%d",&x);
  printf("number of decimal form: %d\n", x);
  printf(" its binary form:" );
  printb(x,sizeof(int)*8);
  putchar('\n');
  return 0;
}

void printb(int x,int n)
{
  if(n>0)
  {
    putchar('0'+( (unsigned)( x & ( 1<<(n-1) ) ) >> (n-1) ));//输出第n位
    printb(x,n-1);
  }
}
