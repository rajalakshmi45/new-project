#include<stdio.h>

int main(void)
{
	int N,A,D,i=0;
	scanf("%d\t%d\t%d",&N,&A,&D);
	for(i=A;0<N;i=i+D)
	{
		printf("%d\t",i);
		N--;
	}
	while(N>0)
	{
		i=A;
		i=i+D;
		N--;
		A++;
	}
	printf("\n%d",i);
	return 0;
}
