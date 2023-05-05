#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,total;
        scanf("%d",&n);
        total = ( n*(n+1) ) / 2;
        if(total%2==0)
        printf("%d\n",n);
        else 
        printf("%d\n",n-1);
        
    }
	return 0;
}

