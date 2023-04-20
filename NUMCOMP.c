#include <stdio.h>
#include <math.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long a,b,n;
        scanf("%ld%ld%ld",&a,&b,&n);
        if(a==b||(n%2==0&&a==-1*b))
        printf("%d\n",0);
        else if(n%2==0)
        {
            if(abs(a)>abs(b))
            printf("%d\n",1);
            else
            printf("%d\n",2);
        }
        else
        {
            if(a>b)
            printf("%d\n",1);
            else
            printf("%d\n",2);
        }
    }
	return 0;
}

