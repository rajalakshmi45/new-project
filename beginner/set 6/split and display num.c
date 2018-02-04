#include <stdio.h>

int main(void) {
	int n,i=0,rem[100],j,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		rem[i]=n%10;
		n=n/10;
		i++;
		count++;
	}
	for(j=count-1;j>=0;j--)
	{
		printf("%d\t",rem[j]);
	}
	return 0;
}
