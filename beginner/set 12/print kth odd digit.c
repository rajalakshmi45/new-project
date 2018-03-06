#include "stdio.h"

int main(void) {
  int N,K,a[100],i,count=0,b[100],l=0;
  scanf("%d\t%d",&N,&K);
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
    if((a[i]%2)!=0)
    {
      b[l]=a[i];
      l++;
    }
  }
 printf("\n%d",b[K-1]);
  return 0;
}
