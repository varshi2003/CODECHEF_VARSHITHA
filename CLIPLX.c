#include <stdio.h>
int main(void) 
{
    int s;
	scanf("%d",&s);
	while(s--)
	{
	    int x,y;
	    int m;
	    scanf("%d %d",&x,&y);
	    if(x<=y)
	     m=0;
	    else
	     m=x-y;
	     printf("\n%d",m);
	}
	return 0;
}
