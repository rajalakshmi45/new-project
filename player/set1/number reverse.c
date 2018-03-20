#include "stdio.h"

int main(void) {
  int N,rem,i=0,count=0,j;
  int a[100];
  scanf("%d",&N);
  while(N>0)
  {
   rem=N%10;
    N=N/10;
    a[i]=rem;
    i++;
    count++;
  }
  for(j=0;count>j;j++)
  {
  printf("%d",a[j]);
  }
  return 0;
}
