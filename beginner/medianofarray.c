#include <stdio.h>

int main(void) {
	int a[50],i,j,n,mid;
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
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	
	for(i=0;i<1;i++)
	{
                mid=n/2;
                i=mid;
	    printf("%d",a[i]);
	}
	}
	return 0;
}
