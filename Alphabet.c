#include<stdio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if( (c>='a'&& c<='z') || (c>='A'&& c<'Z') )
{
printf("alphabet");
}
else
{
printf("it is not an alphabet");
}
}
