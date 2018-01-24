#include <stdio.h>

int main(void) {
	int n;
	int count=0;
	scanf("%d",&n);
	while(n>60)
	{
		n=n-60;
		count=count+1;
	}
	printf("%d\t%d",count,n);
	return 0;
}
