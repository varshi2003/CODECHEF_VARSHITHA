#include <stdio.h>

int main() {
	// your code goes here
int a,b;
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d%d",&a,&b);

int  sum=a+b;
  f:   sum=sum+1;
     int count=0;
     for(int i=1;i<=sum;i++){
         if(sum%i==0){
             count=count+1;
         }
     }
     if(count==2){
         printf("%d\n", sum-a-b);
     }
     else{
         goto f;
     }
     
}
return 0;
}

