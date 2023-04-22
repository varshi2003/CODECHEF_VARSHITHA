#include <stdio.h>
#include<string.h>

#define indian "INDIAN"
#define contest "CONTEST_WON"
#define contributer "TOP_CONTRIBUTOR"
#define bug "BUG_FOUND"
#define host "CONTEST_HOSTED"

void calling(){
    int activities,ladoo,n,total;
    char temp[100];
    scanf("%d",&activities);
    scanf("%s",temp);
    if(!strcmp(temp,indian))
        ladoo=200;
    else
        ladoo=400;
    while(activities--){
        scanf("%s",temp);
        if(!strcmp(temp,contest)){
            scanf("%d",&n);
            if(n<20)
                total+=320-n;
            else
                total+=300;
        }
        if(!strcmp(temp,contributer))
            total+=300;
        if(!strcmp(temp,bug)){
            scanf("%d",&n);
            total+=n;
        }
        if(!strcmp(temp,host)){
            total+=50;
        }
    }
    printf("%d\n",(total/ladoo));
}

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        calling();
    }
    return 0;
}

