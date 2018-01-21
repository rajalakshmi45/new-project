#include <stdio.h>
int main()
{

	int n,num=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=num*i;
	}
	printf("%d",num);

	return 0;
}
