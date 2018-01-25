#include <stdio.h>

int main(void) {
	// your code goes here
	
	int hr1,hr2,min1,min2,hr,min;
	int i;
	scanf("%d\t%d\n%d\t%d",&hr1,&min1,&hr2,&min2);
    hr=hr1-hr2;
    min=min1-min2;
    printf("%d\t%d",hr,min);
    
	return 0;
}
