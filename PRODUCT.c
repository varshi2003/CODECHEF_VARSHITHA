#include <stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)

{
    int n1,n2,num1,num2,rem,gcd;
    scanf("%d%d",&n1,&n2);
    num1=n1;
    num2=n2;
    while(num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    gcd=num1;
    //lcd=(n1*n2)/gcd;
    
    printf("%d\n",n2/gcd);
}
return 0;
}

