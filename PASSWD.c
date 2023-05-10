#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*int isspl(char s){
    char spll[5]={'@','#','%','&','?'};
    for(int j=0;j<5;j++){
        if(s==spll[j]) return 1;
        else return 0;
    }
    
}*/

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    char s[20];
	    scanf("%s",&s);
	    
	    int lower=0,upper=0,spl=0,digit=0;
	    if(strlen(s)<10){
	       printf("NO\n") ;
	    }
	    else{
	        for(int i=1;i<strlen(s)-1;i++){
	            if(isupper(s[i])){
	                upper=1;
	            }
	            else if(islower(s[i])){
	                lower=1;
	            }
	            else if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?'){
	                spl=1;
	            }
	            else if(isdigit(s[i])){
	                digit=1;
	            }
	            
	            }
	   if(islower(s[0]) || islower(s[strlen(s)-1])){
	       lower = 1;
	   }
	   if(lower && upper && digit && spl){
	       printf("YES\n");
	   }
	   else{
	       printf("NO\n");
	   }
	  }
	//  printf("%d %d %d %d\n",lower,upper,digit,spl);
	}
	
	return 0;
}

