#include <stdio.h>
int main()
{
    int n,k,i,j,sum;
    int arr[100];
    sum=0;
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n/2;i++){
        if (n%i==0){
            k++;
            arr[k]=i;
            // printf("%d\n",k);
        }
    }
    // printf("In ra k%d",k);
    
    for (j=1;j<=k;j++){
        sum=sum+arr[j];
    
    }
    
    
    if(sum==n)
        printf("%d",1);
    else 
        printf("%d",0);

    
    return 0;
}