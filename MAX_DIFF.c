#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,s;
	    scanf("%d %d",&n,&s);
	    if(n>=s){
	        printf("%d\n",s);
	    } 
	    else if(s>=n){
	        printf("%d\n",2*n-s);
	    }
	}
	return 0;
}

