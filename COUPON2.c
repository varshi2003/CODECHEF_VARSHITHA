#include <stdio.h>

int main(void) {
	int i,T;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    int D,C;
	    scanf("%d%d",&D,&C);
	    int a1,a2,a3;
	    scanf("%d%d%d",&a1,&a2,&a3);
	    int b1,b2,b3;
	    scanf("%d%d%d",&b1,&b2,&b3);
	    if((a1+a2+a3)>=150 &&(b1+b2+b3)>=150){
	        if(C<2*D)
	         printf("Yes\n");
	        else
	         printf("No\n");}
	   else if(((a1+a2+a3)>=150 &&(b1+b2+b3)<150) ||((a1+a2+a3)<150 &&(b1+b2+b3)>=150)){
	       if(C<D)
	         printf("Yes\n");
	       else
	       printf("No\n");}
	  else
	      printf("No\n");
	   
	    }
	
	return 0;
}

