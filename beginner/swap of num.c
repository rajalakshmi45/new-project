#include <stdio.h>

int main(void) {
	int n,m;
	int temp;
	scanf("%d\t%d",&n,&m);
	if(n<=100000)
	{
	temp=n;
	n=m;
	m=temp;
        printf("%d\t%d",n,m);
	}
		return 0;
}
