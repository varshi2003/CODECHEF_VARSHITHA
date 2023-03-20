#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,k,i;
	scanf("%d%d",&n,&k);
	int t,d,sum=0;
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&t,&d);
	if(k>=t)
	{
	    k=k-t;
	}
	else if(k<t)
	{
	    sum+=((t-k)*d);
	    k=0;
	}
	}
    printf("%d\n",sum);	
	}
	return 0;
}
