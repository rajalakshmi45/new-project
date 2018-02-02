#include <stdio.h>
void main()
{
int n,i,a[10],b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
b=n/2;
printf("%d",a[b]);
}
