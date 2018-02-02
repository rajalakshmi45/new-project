#include "stdio.h"
int main(void) {
  int a,b;
  scanf("%d\t%d",&a,&b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("%d\t%d",a,b);
 
 return 0;
}
