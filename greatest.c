#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter three no's:");
scanf("%d%d%d",&a&b&c);
if(a>b&&a>c)
{
printf("%d is greatest",a);
}
elseif(b>c)
{
printf("%d is greater",b);
}
else
{
printf("%d is greater",c);
}
}
