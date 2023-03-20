#include <stdio.h>



int main(void) {
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]&a[j])==a[i])
            {
                c++;
            }
        }
    }
    printf("%d\n",c);
}
	return 0;
}

