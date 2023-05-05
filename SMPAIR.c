#include <stdio.h>

int main(void) 
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	    long long int n,i;
	    scanf("%lld",&n);
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    int x=1000000;
	    int y=1000000;
	    for (i=0;i<n;i++)
	    {
	        if (x>a[i]){
	            x=a[i];
	        }
	    }
	        for (i=0;i<n;i++)
	        {
	        if (a[i]<y && a[i]!=x)
	        {
	            y=a[i];
	        }
	    }
	    printf ("%d\n",x+y);
	}
	return 0;
}

