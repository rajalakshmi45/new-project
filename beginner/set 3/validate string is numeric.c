#include "stdio.h"

int main(void) {
  char s[10];
  int i,count=0;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
  if(s[i]>='0'&&s[i]<='9')
  {
    count++;
  }
 }
 if(count>0)
 {
   printf("yes");
 }
  return 0;
}
