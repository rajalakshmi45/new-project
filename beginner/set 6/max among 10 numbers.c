#include "stdio.h"

int main(void) {
  int a[10],i,j,temp;
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[j]=a[i];
        a[i]=temp;
      }
    }
    
  }
  printf("%d",a[0]);
  return 0;
}
