#include "stdio.h"

int main(void) {
  int N,M,pro;
  scanf("%d\t%d",&N,&M);
  pro=N*M;
  if(pro%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
