#include <stdio.h>
#include <math.h>
int main ()
{
    int i,n,k;
    int sum;
    
    scanf("%d",&k);
    while (k-- >0)
    {
        sum=0;
        scanf("%d",&n);
        for (i=1;i<=sqrt(n);i++)
        {
            if (n%i==0)
                sum=sum+1;
                
        }
        if (sum==1)
            printf("YES \n");
        else 
            printf("NO \n");
        
        
    }
    return 0;
}