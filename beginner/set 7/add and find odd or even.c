#include "stdio.h"

int main(void) {
 int N,M,c;
 scanf("%d\t%d",&N,&M);
 c=N+M;
 if(c%2==0)
 {
   printf("even");
 }
 else
 {
   printf("odd");
 }
 
 return 0;
}
