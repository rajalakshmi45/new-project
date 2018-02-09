#include "stdio.h"

int main(void) {
  char num[100];
  int i;
  scanf("%s",num);
  for(i=0;num[i]!='\0';i++)
  {
    if(num[i]=='.')
    {
      if(num[i+1]>='5')
      {

      printf("%c",num[0]+1);
      }
      else
      {
        printf("%c",num[0]);
      }
    }
  }
  return 0;
}
