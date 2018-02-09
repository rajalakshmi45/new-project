#include "stdio.h"

int main(void) {
  char a[100];
  int i,count=0;
  int rem,quo;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  rem=count%2;
  quo=count/2;
  for(i=0;i<count;i++)
  {
    if(rem!=0)
    {
      a[quo]='*';
    }
    else
    {
      a[quo-1]='*';
      a[quo]='*';
    }
  }
  for(i=0;a[i]!='\0';i++)
  {
  printf("%c",a[i]);
  }
  return 0;
}
