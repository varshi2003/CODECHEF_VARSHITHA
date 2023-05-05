#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,w1,w2,w3;
        scanf("%d %d %d %d",&s,&w1,&w2,&w3);
        if( (w1+w2+w3)<=s)
        printf("%d\n",1);
        else if( (w1+w2 <= s)||(w2+w3 <= s) )
        printf("%d\n",2);
        else 
        printf("%d\n",3);
    }
	return 0;
}

