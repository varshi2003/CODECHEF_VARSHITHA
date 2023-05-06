#include <stdio.h>



int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,k,x;
	    scanf("%d %d %d %d",&n,&m,&k,&x);
	    int mob,j,days_btn_mob;
	    mob= (n*k) + m;
	    j = x % mob;
	    days_btn_mob = (k-1)*n;
	    if(j > days_btn_mob || j == 0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

