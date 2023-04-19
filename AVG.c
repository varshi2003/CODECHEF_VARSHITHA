#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,v;
	    scanf("%d %d %d",&n,&k,&v);
	    int sum=0;
	    int arr[100];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	        sum+=arr[i];
	    } 
	    int tot = v*(n+k) ;
	    int res = (tot-sum)/k ;
	    if( ((tot-sum)%k==0) && res>0 )
	    {
	        printf("%d\n",res);
	    } 
	    else
	    {
	    printf("%d\n",-1);
	        
	    }
	}
	return 0;
}

