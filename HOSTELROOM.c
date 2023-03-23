#include <stdio.h>
int main(void) 
{
    int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    int a[n], max=x;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        x=x+a[i];
	        if(x>max)
	        {
	            max=x;
	        }
	    }
	    printf("%d\n",max);
	}
	return 0;
}
 