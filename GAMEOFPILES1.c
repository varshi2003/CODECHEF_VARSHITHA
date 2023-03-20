#include <stdio.h>
int main(void) 
{
    int x;
	scanf("%d",&x);
	while(x--)
	{
	    int n,t=0,s=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        s=s+arr[i];
	    if(arr[i]==1)t=1;
	    }
	    if(s%2==0&&t!=1)
	    printf("CHEFINA\n");
	    else
	    printf("CHEF\n");
	}
	return 0;
}
