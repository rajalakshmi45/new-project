#include "stdio.h"

int main(void) {
 int n,rem,quo;
 scanf("%d",&n);
 rem=n%10;
 quo=n/10;
 if(n<=10000)
 {
 if(n<10)
 {
   printf("10");
 }
 else
 {
 if(rem<5)
 {
   printf("%d",quo*10);
 }
 else
 {
   printf("%d",(quo+1)*10);
 }
 }
 }
  return 0;
}
