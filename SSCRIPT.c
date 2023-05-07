#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b, count = 0, flag = 0;
	    scanf("%d %d", &a, &b);
	    char str[a+1];
	    scanf("%s", str);
	    for(int i = 0; i<a; i++){
	        if(str[i] == '*'){
	            count++;
	        }
	        else if(str[i] != '*'){
	            count = 0;
	        }
	        if(count == b){
	            flag = 1;
	        }
	    }
	    if(flag == 1){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
