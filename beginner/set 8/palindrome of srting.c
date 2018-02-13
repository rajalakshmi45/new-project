#include "stdio.h"

int main(void) {
  char S[100],b[100];
  int count1=0,i,k=0,count2=0,j;
  scanf("%s",&S);
  for(i=0;S[i]!='\0';i++)
  {
    count1++;
  }
  for(j=count1-1;j>=0;j--)
  {
    b[k]=S[j];
    k++;
  }
  for(i=0;S[i]!='\0';i++)
  {
    for(j=i;j<=i;j++)
    {
      if(S[i]==b[j])
      {
        count2++;
      } 
    }
  }
  if(count1==count2)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
