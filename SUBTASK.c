#include <stdio.h>                      

int main(void) {                         
	int t;
	scanf("%d",&t);                      
		for(int i=0;i<t;i++)  { 
	    int n,m,k,i,d=0,f=0;
	    scanf("%d%d%d",&n,&m,&k);
	    int a[n];
	    for(i=0;i<n;i++){              
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<m;i++){                
	        if(a[i]==1){
	            f = f+1;
	        }
	    }
	    for(i=0;i<n;i++){              
	        if(a[i]==1){
	            d =d+1;
	        }
	    }
	    if(d==n){                      
	        printf("100\n");
	    }
	    else if(f==m){                 
	        printf("%d\n",k);
	    }
	    else{
	        printf("0\n");
	    }
	    
	}
	return 0;
}