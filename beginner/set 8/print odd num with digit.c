#include "stdio.h"

int main(void) {
  int n,i=0,rem,count=0,b[100];
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
    n=n/10;
    if((rem%2)!=0)
    {
      b[i]=rem;
      i++;
      count++;
    }
  }
  for(i=count-1;i>=0;i--)
  {
    printf("%d\t",b[i]);
  }
  return 0;
}
