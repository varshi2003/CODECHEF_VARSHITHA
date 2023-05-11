#include <stdio.h>
#include<string.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    char s[1000];
	    scanf("%s",s);
	    int  q=0, p=strlen(s)-1;
	    if(s[0]=='<' && s[1]=='/' && s[p]=='>'&& p>2){
	        for(int i=2; i<p; i++){
	            if((48<=s[i]&& s[i]<=57) || (97<=s[i] && s[i]<=122)){
	             q++;}
	    }   if(q==p-2){
	        printf("success\n");
	    }
	        else{
	            printf("error\n");
	        }
	    }
	    
	
	    else{
	        printf("error\n");
	    }}
	
	return 0;
}