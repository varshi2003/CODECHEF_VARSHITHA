 #include <stdio.h>

int main() {
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int arr[n],sum=0,count1=0,count2=0;
        float avg;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
            sum=sum+arr[j];
        }
        
        avg=sum/n;
        for(int k=0;k<n;k++){
            if(arr[k]==5){
              count1=count1+1;
            }
            if(arr[k]==2){
                count2=count2+1;
            }
        }
        if(count1>=1 &&count2==0 && avg>=4 ){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }}
	return 0;
}

