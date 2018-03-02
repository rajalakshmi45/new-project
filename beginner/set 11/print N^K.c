#include "stdio.h"

int main(void) {
  int N,K,POW=1,i;
  scanf("%d\t%d",&N,&K);
  for(i=0;i<K;i++)
  {
    POW=POW*N;
  }
  printf("%d",POW);
  return 0;
}
