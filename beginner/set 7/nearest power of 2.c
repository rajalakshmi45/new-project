#include "stdio.h"

int main(void) {
 int n,a=1,i;
 scanf("%d",&n);
 if(n<=1000)
 {
 for(i=0;i<n;i++)
 {
   a=a*2;
   if(a==n)
   {
     printf("%d",n*2);
     break;
   }
 }
 }
 
  return 0;
}
