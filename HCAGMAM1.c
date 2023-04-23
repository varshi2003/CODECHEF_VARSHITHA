#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,i,cnt=0,cnt2=0,max=0;
        scanf("%d %d",&x,&y);
        char s[30];
        scanf("%s",s);
        for(i=0;i<30;i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        for(i=0;i<30;i++)
        {
            if(s[i]=='1')
            {
                cnt2++;
                if(cnt2>max)
                    max=cnt2;
            }
            else
                cnt2=0;
        }
        printf("%d\n",cnt*x+max*y);
        
    }
	// your code goes here
	return 0;
}

