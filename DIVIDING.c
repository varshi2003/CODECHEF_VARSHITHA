#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int c[n];
    int sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&c[i]);
        sum1=sum1+c[i];
        sum2=sum2+i;
    }
    if(sum1==sum2)
    printf("yes\n");
    else 
    printf("no\n");
	return 0;
}

