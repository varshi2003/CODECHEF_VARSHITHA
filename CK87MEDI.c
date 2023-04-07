#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,i,j;
	    scanf("%d %d",&n,&k);
	    int a[100];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int temp=a[1];
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	            if(a[i]>a[j])
	            {
	            temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	                
	            }
	        }
	    }
	    int size=n+k;
	    if(size%2!=0)
	    printf("%d\n",a[size/2]);
	    else 
	    printf("%d\n",a[(size/2)+1]);
	}
	return 0;
}

