#include "stdio.h"

int main(void) {
  char s[1000];
  int i,count;
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(!(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]==' '))
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
