#include "stdio.h"

int main(void) {
  int N,K,a[100],i;
  scanf("%d\t%d",&N,&K);
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("%d",a[K-1]);
  return 0;
}
