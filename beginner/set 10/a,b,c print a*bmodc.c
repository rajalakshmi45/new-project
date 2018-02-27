#include "stdio.h"

int main(void) {
  int a,b,c,pro,res;
  scanf("%d\t%d\t%d",&a,&b,&c);
  pro=a*b;
  res=pro%c;
  printf("%d",res);
  return 0;
}
