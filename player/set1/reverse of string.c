#include "stdio.h"

int main(void) {
  char a[100000],b[100000];
  int i,j=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    b[j]=a[i];
    j++;
  }
  for(i=j-1;i>=0;i--)
  {
    printf("%c",b[i]);
  }
  return 0;
}
