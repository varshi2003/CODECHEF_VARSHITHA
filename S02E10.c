#include <stdio.h>
#include <math.h>
int main() {
	int t,n,x,k,p,count;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{ count=0;
	    scanf("%d %d %d",&n,&x,&k);
	    int arra[n],arrb[n];
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&arra[j]);
	    }
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&arrb[j]);
	    }
	    for(int j=0;j<n;j++)
	    { 
	        p=fabs(arra[j]-arrb[j]);
	        if (p<=k)
	        {
	            count++;
	        }
	    }if(count>=x)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	     
	}
	return 0;
}

