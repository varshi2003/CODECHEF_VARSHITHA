#include <stdio.h>



int main(void) {

	// your code goes here

	int t;

	scanf("%d",&t);

	while(t--)

	{

	    int m,x,y,i;

	    scanf("%d %d %d",&m,&x,&y);

	    int a[m];

	    for(i=0;i<m;i++)

	    {

	        scanf("%d",&a[i]);

	    }

	    int count=0,j,k,p,q,r;

	    for(j=1;j<=100;j++)

	    {

	        r=0;

	        for(k=0;k<m;k++)

	        {

	            q=a[k]-x*y;

	            p=a[k]+x*y;

	            if(j>=q && j<=p)

	            {

	               r=1;

	            }

	        }

	        if(r==0)

	        {

	            ++count;

	        }

	    }

	    printf("%d\n", count);

	

	}

	return 0;

}

