#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,p,q,r;
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&p,&q,&r);
	    float majority=(p+q+r)/2;
	    if(p+b+c > majority)
	    printf("yes\n");
	    else if(a+b+r > majority)
	    printf("yes\n");
	    else if(a+q+c > majority)
	    printf("yes\n");
	    else 
	    printf("no\n");
	}
	return 0;
}

