#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int Ai;
	    int B[101];
	    for(int i=0;i<101;i++)
	    B[i] = 0;
	    while(n--)
	    {
	        scanf("%d",&Ai);
	        B[Ai]++;
	    }
	    int flag = 0;
	    for(int i=1;i<101;i++)
	    {
	        if(B[i] % 2 == 1)
	        {
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 1)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}


