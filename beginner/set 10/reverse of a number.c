#include "stdio.h"

int main(void) {
  int n,i=0,rem,b[100],count=0;
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
    n=n/10;
    b[i]=rem;
    i++;
    count++;
  }
  for(i=0;i<count;i++)
  {
    printf("%d",b[i]);
  }
  return 0;
}
