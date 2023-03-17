#include <stdio.h>

int main(void) {

	// your code goes here
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
	   long int n;
	    scanf("%ld",&n);
	    if(n%2==0)
	    {
	    n=n/2;
	    printf("%ld\n",(n*n*2));
	  }
	else
	{
	    n=n/2;
	    printf("%ld\n",(n*(n+1)*2));
	}
	}


	return 0;
}

