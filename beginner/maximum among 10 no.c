#include <stdio.h>

int main(void) {
             int a[100],i,j;
             int temp;
             for(i=0;i<10;i++)
             {
             	scanf("%d",&a[i]);
             }
             for(i=0;i<10;i++)
             {
             	for(j=1;j<10;j++)
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
             	printf("%d",a[0]);
             }
	
	
	return 0;
}
