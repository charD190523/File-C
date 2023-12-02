#include <stdio.h>
int checkhh (int n);
int checkhh (int n)
{
    int i,j,sum;
    sum =0;
    for (i=1; i<=n/2; i++) {
        if (n%i == 0) {
            sum+=i;
        }
    }
    if (sum != n) {
        return 0;
    }
    return 1;
}
int main ()
{
    int i,j,n,sum;
    
    scanf("%d",&n);
    for (j=2; j<n; j++) {
        // printf("%d",j);
        // sum=0;
        // for (j=1; j<=i/2; j++) {
        //     if (i%j == 0) {
        //         
        //         sum=sum+j;
        //         
        //     }
        // }
        // if (sum == i) {
        //     printf("%d ",sum);
        // }
        if (checkhh(j)==1) {
            printf("%d ",j);
        }   
        
    }
    return 0;
    
}