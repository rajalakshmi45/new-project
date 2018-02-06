#include "stdio.h"

int main(void) {
  int n,a=1,b=1,c;
  scanf("%d",&n);
  printf("%d\t%d",a,b);
  while(n-1>1)
  {
    c=a+b;
    a=b;
    b=c;
    printf("\t%d",c);
    n--;
  }
  
  return 0;
}
