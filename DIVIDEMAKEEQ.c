#include <stdio.h>

int GCD(int a,int b){
    if(b!=0){
        if(a>b)
        return GCD(b,a%b);
        else if(b>a)
        return GCD(a,b%a);
        else
        return a;
    }
    else
    return a;
}

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    
	    int gcd=a[0];
	    for(int i=1;i<n;i++){
	        gcd=GCD(gcd,a[i]);
	    }
	    
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=gcd)
	        c++;
	    }
	    printf("%d\n",c);
	    
	}
	return 0;
}

