#include "stdio.h"

int main(void) {
  int n,m;
  scanf("%d\t%d",&n,&m);
  n=n^m;
  m=n^m;
  n=n^m;
  printf("%d\t%d",n,m);
  
  return 0;
}
