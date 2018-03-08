#include "stdio.h"

int main(void) {
  char s[1000];
  int i,j,count=0;
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
  {
    for(j=0;s[j]!='\0';j++)
    {
      if(s[i]==s[i+1])
      {
        count++;
      }
    }
  }
  if(count!=0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
