#include <stdio.h>

int main(void) {
            char a[1000];
            int count=1,i;
            scanf("%[^\n]s",&a);
            for(i=0;a[i]!='\0';i++)
            {
            	if(a[i]=='.')
            	{
            		count=count+1;
            	}
            }
            printf("%d",count);
	return 0;
}
