#include "stdio.h"

int main(void) {
 char a[100],b[100],c[100];
 int i,j=0,k=0,count1=0,count2=0;
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
   if(i%2==0)
   {
     b[j]=a[i];
     j++;
     count1++;
   }
   else
   {
     c[k]=a[i];
     k++;
     count2++;
   }
 }
 for(i=0;i<=count1-1;i++)
 {
   printf("%c",b[i]);
 }
 printf("\t");
 for(j=0;j<=count2;j++)
 {
   printf("%c",c[j]);
 }
  return 0;
}
