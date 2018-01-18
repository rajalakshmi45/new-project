	#include<stdio.h>
  void main()
  {
  int n,m,rem,i;
	int sum=0;
	scanf("%d\t%d",&n,&m);
	for(i=n+1;i<m;i++)
	{
		while(i!=0)
		{
			rem=i%10;
			sum=sum+rem*rem*rem;
			i=i/10;
		}
		if(i==sum)
		printf("%d",sum);
	}
  }
