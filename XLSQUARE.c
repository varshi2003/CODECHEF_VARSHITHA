#include <stdio.h>
#include <math.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,a,num;
	    scanf("%d %d",&n,&a); 
	    num=sqrt(n);
	    printf("%d\n",num*a);
	    
	}
	return 0;
}

