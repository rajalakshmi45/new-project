#include<stdio.h>
int main()
{
	int n,i,m,j,l;
	int s=0;
	int count=0,b[50],k=0;
	scanf("%d\t%d",&n,&m);
	for(i=n+1;i<m;i++)
	{
		l=i;
		s=0;
		for(j=2;j<i;j++)
		{
		  if((i%j)==0)
	                 {
			s=++count;
	     	      }
	     	      
		}
	 if(s==0)
	 {
	 b[k]=l;
	 k++;
	 }
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
