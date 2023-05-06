#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count=0;
        scanf("%d",&n);
        for(i=1;i<=500;i++)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
                count++;
            }
            if(count==n)
            {
                break;
            }
        
        }
        printf("\n");
    }
	
	return 0;
} 
