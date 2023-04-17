#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n;
	   scanf("%d",&n);
	   int a[n],b[n];
	   long long int a1=0,b1=0;
	   for(int i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   for(int i=0;i<n;i++)
	   scanf("%d",&b[i]);
	   for(int i=0;i<n;i++)
	   {
	       if(a[i]>b[i])
	       a1=a1+(a[i]-b[i]);
	       else
	       b1=b1+(b[i]-a[i]);
	   }
	   if(a1==b1)
	   printf("\n%lld",a1);
	   else
	   printf("\n-1");
	}
	return 0;
}

