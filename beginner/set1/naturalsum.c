#include<stdio.h>
void main()
{
int n,i;
int sum=0;
printf("enter the limit:");
scanf("%d",&n);
if(n!=0)
{
for(i=0;i<=n;i++)
{
sum=sum+i;
}
}
printf("%d",sum);
}
