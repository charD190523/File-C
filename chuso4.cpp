#include <stdio.h>
#include <math.h>
int kt (int n) 
{
    int a[10];
    int i=0,j,k;
    int sum=0;
    while (n>0) {
        a[i] = n%10;
        if (a[i] == 4) return 0;
        sum =sum +a[i];
        n/=10;
        i++;
    }
    
     
    if (sum % 10 !=0) return 0;
    for (j=0; j<=i/2; j++ ) {
        if (a[j]!=a[i-1-j]) {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int t,i,n,j;
    int a=1,b=10;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        // for (i=1; i<n; i++) {
        //     a=a*10;
        //     b=b*10;
        // }
        
        
        for (i=pow(10,n-1); i<pow(10,n); i++) {
            if (kt (i)==1) {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}