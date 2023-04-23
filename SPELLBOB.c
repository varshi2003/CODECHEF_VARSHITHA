#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    char a[3],b[3];
	    scanf("%s",a);
	    scanf("%s",b);
	    int flag=0;
	    if(a[0]=='o'|| b[0]=='o'){
            if((a[1]=='b'||b[1]=='b') && (a[2]=='b'||b[2]=='b')){
                printf("yes\n");
                flag=1;
                continue;
            }
        }
        if((a[0]=='b'||b[0]=='b')){
            if((a[1]=='b'||b[1]=='b') && (a[2]=='o'||b[2]=='o')){
                printf("yes\n");
                flag=1;
                continue;
            }else if((a[1]=='o'||b[1]=='o') && (a[2]=='b'||b[2]=='b')){
                printf("yes\n");
                flag=1;
                continue;
            }
            
        }
        if(flag==0){
            printf("no\n");
        }
	}
	return 0;
}


