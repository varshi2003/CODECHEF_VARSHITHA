#include <stdio.h>

int main(void) {
	int t,n,a,b,c;
	scanf("%d",&t);
	while(t--){
	    int n,a,b,c;
	    scanf("%d %d %d %d",&n,&a,&b,&c);
	    if( ((a>=n)&&(b>=n))||((c>=n)&&(b>=n)) )
	    printf("yes\n");
	    else if((b>a)&&((b-a)<=c)){
	        if(b>=n){
	            printf("yes\n");
	        }
	        else 
	        printf("no\n");
	    }
	    else if((b>a)&&((b-a)>=c)){
	        if((a+c)>=n)
	        printf("yes\n");
	        else 
	        printf("no\n");
	    }
	    else 
	    printf("no\n");
	}
	
	return 0;
}

