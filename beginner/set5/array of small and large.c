#include <stdio.h>
void main()
{
 int n,a[100],i,j,temp,b;
 scanf("%d",&n);
 if(n<=10000)
 {
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
     if(a[i]<a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
 }
 printf("%d\t%d",a[0],a[n-1]);
 }
}
