#include <stdio.h>
#include<string.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        char s[1001];
        scanf("%s",s);
        int min;
        if(x>=y)
        min=y;
        else 
        min=x;
        int i,zero=0,one=0;
        for(i=0;i<n;i++){
            if(s[i]=='1')
            one=one+1;
            else if(s[i]=='0')
            zero=zero+1;
        }
        if(zero==0 || one==0)
        printf("%d\n",0);
        else 
        printf("%d\n",min);
        
    
	}
	return 0;
}

