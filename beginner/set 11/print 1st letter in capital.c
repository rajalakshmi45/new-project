#include "stdio.h"

int main(void) {
  char a[100];
  int i,n,m;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(i==0)
    {
     n=a[i];
     m=n-32;
     a[i]=m;
    }
    if(a[i]==' ')
    {
      n=a[i+1];
      m=n-32;
      a[i+1]=m;
    }
    printf("%c",a[i]);
  }
  return 0;
}
