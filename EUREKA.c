#include <stdio.h>
#include<math.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    double x=pow(0.143*n,n);
	    if((x-floor(x))<0.5)
	    printf("%0.f\n",floor(x));
	    else
	    printf("%0.f\n",floor(x)+1);
	}
	return 0;
}

