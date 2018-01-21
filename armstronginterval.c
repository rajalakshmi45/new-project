#include<stdio.h>
void main()
{
	int n,i,l;
	static int s;
	int count=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if((n%i)==0)
		{
			s=++count;
		}
	  
	}
	printf("%d",s);
	 if(s>2)
	printf("no");
	else
	printf("yes");
	
	}
	
