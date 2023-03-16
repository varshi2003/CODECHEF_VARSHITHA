#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,temp,count=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        int c=a[k-1];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(c==a[i])
            {
                count=i;
                break;
            }
        }
        printf("%d\n",count+1);
    }
	return 0;
}
