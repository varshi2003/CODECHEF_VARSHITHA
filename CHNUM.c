#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
            count++;
        }
        if(n==count)
        printf("%d %d\n",n,n);
        else
        printf("%d %d\n",count,n-count);
    }
    return 0;
}


