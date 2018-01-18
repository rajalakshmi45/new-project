#include<stdio.h>
void main()
{
	int a,b,c,i;
	int count=1;
printf("enter the numbers");
scanf("%d\t%d",&a,&b);
for(i=1;i<=b;i++)
{
	c=count*a;
	count=c;
}
printf("%d",c);
}
