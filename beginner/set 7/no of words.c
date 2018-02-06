#include "stdio.h"

int main(void) {
  char s[10000];
  int i,count=1;
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
{
  if(s[i]==' ')
  {
    count++;
  }
}
  printf("%d",count);
  return 0;
}
