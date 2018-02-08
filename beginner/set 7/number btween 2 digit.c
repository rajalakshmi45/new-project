#include "stdio.h"

int main(void) {
  int N,L,R,i,count=0;
  scanf("%d",&N);
  scanf("%d\t%d",&L,&R);
  for(i=L;i<=R;i++)
    if(i==N)
    {
      count++;
    }
if(count>0)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}
