#include <stdio.h>
int calcsum(int num);
int main(void) {
	int t,num;
	scanf("%d",&t);
	while(t>=1)
	{
	    scanf("%d",&num);
	    int i=num+1;
	    while(1)
	    {
	        if(calcsum(i)%2!=calcsum(num)%2)
	        {
	            printf("%d\n",i);
	            break;
	        }
	        i++;
	    }
	    t--;
	}
	return 0;
}
int calcsum(int num)
{   int sum=0;
    while(num!=0)
    {
    sum+=num%10;
    num/=10;
    }
    return sum;
}

