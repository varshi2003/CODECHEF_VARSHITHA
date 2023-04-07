#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],i,even=0,odd=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]%2==0)
	        even++;
	        else
	        odd++;
	    }
	    if(n==even)
	    printf("0\n");
	    else
	    printf("%d\n",even);
	}
	return 0;
}