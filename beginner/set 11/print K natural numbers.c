#include "stdio.h"

int main(void) {
  int K,sum=0,i;
  scanf("%d",&K);
  if(K<=100000)
  {
  for(i=1;i<=K;i++)
  {
    sum=sum+i;
  }
  printf("%d",sum);
  }
  return 0;
}
