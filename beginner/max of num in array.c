#include <stdio.h>

int main(void) {
	int a[50],i,j,n;
	int temp;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n<1000){
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<1;i++)
	{
		printf("%d\t",a[0]);
	}
	}
	return 0;
}
