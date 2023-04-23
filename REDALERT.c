#include <stdio.h>

int main(void) {
    int T , N , D , H ;
    scanf("%d" , &T);
    for(int i=0 ; i<T ; i++){
        scanf("%d %d %d" , &N , &D , &H);
        int A[N];
        for(int j=0 ; j<N ; j++){
            scanf("%d" , &A[j]);
        }
        int waterlevel=0;
        int c=0;
        for(int j=0 ; j<N ; j++){
            if(A[j]>0){
                waterlevel=waterlevel+A[j];
            }
            else if(A[j]==0){
                if(waterlevel>=D){
                    waterlevel=waterlevel-D;            
                }
                else {
                    waterlevel=0;
                }
            }
            if(waterlevel>H){
                c=c+1;
            }
        }
        if(c>0){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
	return 0;
}

