#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int c1=0,c2=0,length;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='1')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if(c1>c2)
        {
            length=c2*2+1;
            printf("%d",length);
        }
        else if(c1<c2)
        {
            length=c1*2+1;
            printf("%d",length);
        }
        else
        {
            length=c1*2;
            printf("%d",length);
        }
        printf("\n");
    }
    return 0;
}
