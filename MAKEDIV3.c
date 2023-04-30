#include <stdio.h>
#include <math.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        
        int arr[10000]={0};
        
        arr[0]=3;
        arr[n-1]=3;
        for(int i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
