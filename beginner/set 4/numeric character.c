#include "stdio.h"

int main(void) {
  char s[1000];
  int i,count;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]>='0'&&s[i]<='9')
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
