#include "stdio.h"

int main(void) {
  int N,K,a[100],i,count=0;
  scanf("%d\t%d",&N,&K);
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
    if(a[i]==K)
    {
      count++;
    }
  }
 printf("%d",count);
  return 0;
}
