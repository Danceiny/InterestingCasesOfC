#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  double y;
  int x,m;
  for(y=1;y>=-1;y-=0.1)
  {
    m = acos(y)*10;
    for(x=1;x<m;x++)
    {
      printf(" ");
    }
    printf("*");
    for (; x<62-m;x++)
    {
      printf(" ");
    }
    printf("*\n");
    
  }
  return 0;
}
