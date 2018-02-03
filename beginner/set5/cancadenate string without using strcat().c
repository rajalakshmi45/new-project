#include "stdio.h"

int main(void) {
  char a[1000],b[1000];
  int i,j,count1=0,count2=0;
  scanf("%s",&a);
  scanf("%s",&b);
  printf("%s%s",a,b);   //direct way
  while(a[i]!='\0')
  i++;
  while(b[j]!='\0')
  {
    a[i]=b[j];
    j++;
    i++;
  }
  a[i]='\0';
  printf("%s",a);
  return 0;
}
