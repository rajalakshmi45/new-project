#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a>0)
{
printf("the number is positive");
}
elseif(a<0)
{
printf("the number is negative");
}
elseif(a==0)
{
printf("the number is zero");
}
else
{
printf("no is not a positive,negative or zero");
}
}
