#include <stdio.h>

int main(void) {
	int i,T;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    int N,D;
	    scanf("%d%d",&N,&D);
	    int a[N],j,count=0;
	    for(j=0;j<N;j++){
	        scanf("%d",&a[j]);
	    }
	    for(j=0;j<N;j++){
	        if(a[j]>=80 || a[j]<=9)
	            count++;
	    }
	    if(count%D==0 && (N-count)%D==0)
	    printf("%d\n",(count)/D+(N-count)/D);
	    else  if((count%D==0 && (N-count)%D!=0) ||(count%D!=0 &&(N-count)%D==0))
	    printf("%d\n",(count)/D+1+(N-count)/D);
	    else 
	     printf("%d\n",(count)/D+2+(N-count)/D);
	}
	return 0;
}

