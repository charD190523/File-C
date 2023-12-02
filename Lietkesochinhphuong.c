#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,i,j,k,sum;
    int arr[100];
    scanf("%d %d",&m,&n);
    
    sum=0;
    k=0;
    for (i=m;i<=n;i++)
    {
        
        j=sqrt(i);
        if (j*j==i)
        {
            arr[k]=i;
            k++;
            sum=sum+1;
        }
    }
    printf("%d \n",sum);
    
    for (i=0;i<sum;i++)
        printf("%d \n",arr[i]);
    return 0;
}