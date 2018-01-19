#include<stdio.h>
void main()
{
int n,i,rem;
int sum=0;
scanf("%d",&n);
if(n<=1000)
i=n;
while(n>0)
{
rem=n%10;
n=n/10;
sum=sum*10+rem;
}
if(i==sum)
printf("yes");
}
