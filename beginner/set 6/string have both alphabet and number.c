#include "stdio.h"
int main(void) {
  char s[1000];
  int i,count1=0,count2=0;
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
    {
      count1++;
    }
    if(s[i]>='0'&&s[i]<='9')
    {
      count2++;
    }
  }
  if(count1>0&&count2>0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
