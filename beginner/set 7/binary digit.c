#include "stdio.h"

int main(void) {
  char a[100];
  int count1=0,count2=0,i;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    count1++;
    if(a[i]=='1'||a[i]=='0')
    {
      count2++;
    }
    
  }
 if(count1==count2)
  {
        printf("yes");
  }
  return 0;
}
