#include "stdio.h"

int main(void) {
  int a,b,pro,squ,i;
  scanf("%d\t%d",&a,&b);
  pro=a*b;
  if(a==b)
  {
  for(i=1;i<=pro;i++)
  {
    squ=i*i;
    if(squ==pro)
    {
      printf("yes");
    }
  }
  }
  return 0;
}
