#include <stdio.h>

int main(void) {
	int t,n,x,s,a,b;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    scanf("%d %d %d",&n, &x, &s);
	    for(int j=1;j<=s;j++){
	        scanf("%d %d",&a,&b);
	        if(a==x){
	            x=b;
	        }else if(b==x){
	            x=a;
	        }
	    }
	    printf("%d\n",x);
	}
	return 0;
}

