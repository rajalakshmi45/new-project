#include "stdio.h"

int main(void) {
  int N,K,a[100],i,count=0,b[100],l=0,temp,j;
  scanf("%d\t%d",&N,&K);
  for(i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      if(a[i]<a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
  }
 printf("\n%d",a[K-1]);
  return 0;
}
