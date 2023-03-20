#include <stdio.h>
int main(void) 
{
    int x1,x2;
	scanf("%d %d",&x1,&x2);
	int diff = x1 - x2;
	if(diff%10 ==9)
	{
	    diff-=1;
	}
	else
	{
	    diff+=1;
	}
	printf("%d",diff);
	return 0;
}
