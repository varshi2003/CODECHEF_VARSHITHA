#include <stdio.h>
int main(void) 
{
    int v;
    scanf("%d",&v);
	for(int i=0;i<v;i++)
	{
	    int a,b,max;
	    long s=0;
	    scanf("%d%d",&a,&b);
	    int arr[a];
	    for(int i=0;i<a;i++)
	    {
	        scanf("%d",&arr[i]);
	        int x=abs(arr[i]-b);
	        int y=abs(arr[i]-1);
	        if(x>=y)
	        max=x;
	        else
	        max=y;
	        s=s+max;
	    }
	    printf("%ld\n",s);
	}
}
