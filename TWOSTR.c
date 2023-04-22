#include<stdio.h>
#include<string.h>

int main(){
    int t,i,j,n;
    scanf("%d",&t);
    for (i=1;i<=t;i++){
        char a[10],b[10],temp;
        scanf("%c",&temp);
        scanf("%s",a);
        scanf("%s",b);
        n=strlen(a);
        for (j=0;j<n;j++){
            if(a[j]!=b[j] && a[j]!='?' && b[j]!='?'){
                printf("No\n");
                break;
            }
            if(j==n-1)
                printf("Yes\n");
        }
    }
    return 0;
}
