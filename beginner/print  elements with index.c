#include <stdio.h>

int main(void) {
	int a[50],i,j,n;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<=i;j++)
		{
		    printf("%d\t%d\n",a[i],j);
			}
		}

	return 0;
}
