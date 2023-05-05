#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,j;
	    scanf("%d",&n);
	    int arr[4]={0},c=0,e=0,i;
	    for(j=0;j<n;j++)
	    {
	        char str[1000];
	        scanf("%s",str);
	        int len = strlen(str);
	        
	        for(i=0;i<len;i++)
	        {
	            switch(str[i])
	            {
	                case 'c' : c++;break;
	                case 'e' : e++;break;
	                case 'o' : arr[0]++;break;
	                case 'd' : arr[1]++;break;
	                case 'h' : arr[2]++;break;
	                case 'f' : arr[3]++;break;
	            }
	        } 
	    }
	    
	   for(i=0;i<4;i++)
	   {
	   if(arr[0]>arr[i])
	   {
	   arr[0]=arr[i];
	   }
	   }
	   if(c>e)
	   c=e;
	   c/=2;
	   if(arr[0]>c)
	   printf("%d\n",c);
	   else 
	   printf("%d\n",arr[0]);
	    
	}
	return 0;
}

