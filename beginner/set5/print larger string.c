#include "stdio.h"

int main(void) {
  char a[1000],b[1000];
  int i,j,count1=0,count2=0;
  scanf("%s",&a);
  scanf("%s",&b);
  for(i=0;a[i]!='\0';i++)
  {
    count1=count1+1;
  }
   for(j=0;b[j]!='\0';j++)
    {
      count2=count2+1;
    }
  if(count1>count2)
  {
    printf("%s",a);
  }
  else
  {
    printf("%s",b);
  }
  return 0;
}
