#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    
	    char t;
	    for(int i=0;i<n/2;i++){
	        if(s[i]>s[n-i-1]){
	            t=s[i];
	            s[i]=s[n-i-1];
	            s[n-i-1]=t;
	        }
	    }
	    
	    int c=0;
	    for(int i=0;i<n-1;i++){
	        if(s[i]<=s[i+1])
	        c++;
	        else
	        break;
	    }
	    
	    printf("%s\n",(c==n-1)?"YES":"NO");
	}
	return 0;
}

