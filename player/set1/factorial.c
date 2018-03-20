#include "stdio.h"

int main(void) {
  int N,i,sum=1;
  scanf("%d",&N);
  if(N<=20)
  {
    for(i=1;i<=N;i++)
    {
      sum=sum*i;
    }
    printf("%d",sum);
  }
  return 0;
}
