#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,i;
	    scanf("%d %d",&n,&k);
	    char str[n];
	    scanf("%s",str);
	    if(str[0]=='0')
	    {
	        str[0]='1';
	        k--;
	    }
	    printf("%s",str);
	    
	    for(i=0;i<k;i++)
	    {
	        printf("0");
	    }
	    
	    printf("\n");
	}
	return 0;
}

