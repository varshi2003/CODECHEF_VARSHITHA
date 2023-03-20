#include <stdio.h>

int main(void) {
	// your code goes here
	long int x,y,t;
	scanf("%ld %ld %ld", &x, &y, &t);
	long int a=t-x;
	long int b=a/y;
	
	if(b%2==0){
	    printf("Lucky Chef\n");
	}
	else{
	    printf("Unlucky Chef\n");
	}
	return 0;
}

