	#include <stdio.h>

void main() {
	int m,n,i,s,rem;
	int sum=0;
	scanf("%d\t%d",&m,&n);
	for(i=m+1;i<n;i++)
	{
		s=i;
		int x=i;
                        sum=0;
 		while(x>0)
		{
		            rem=x%10;
			sum=sum+rem*rem*rem;
			x=x/10;
		}
	            if(sum==s)
		printf("%d",sum);
	}
	
}
