#include<stdio.h>
void main()
{
int n,rem,l;
	int sum=0;
	scanf("%d",&n);
	l=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem*rem*rem;
	}
	if(l==sum)
	printf("yes");
	else
	printf("no");
  }
