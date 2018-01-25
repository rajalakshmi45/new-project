#include <stdio.h>
int main(void)
{
	int N,A,D,i;
	int sum=0;
	scanf("%d\t%d\t%d",&N,&A,&D);
	if(A<=100000&&D<=100000)
	{
	for(i=A;1<=N;i=i+D)
	{
		sum=sum+i;
		N--;
	}
	printf("%d",sum);
	}
	return 0;
}
