#include <stdio.h>

int main(void) {
	int i,T;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	   char a[100000];
	    scanf("%s",&a);
	    int z=strlen(a);
	   int c1=0,j,c2=0;
	 
	    for(j=0;j<z;j++){
	        if(a[j]=='0')
	            c1++;
	        else if(a[j]=='1')
	            c2++;}
	   if((c1==1 || c2==1))
	    printf("Yes\n");
	   else
	    printf("No\n");
	}
	return 0;
}

