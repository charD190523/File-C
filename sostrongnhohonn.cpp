#include <stdio.h>
int gt(int n);
int gt (int n)
{
    int i,gt;
    gt=1;
    for (i=2;i<=n;i++) {
        gt*=i;
    }
    return gt;
}
int main ()
{
    int i,n,a[20],so,sum,j;
    scanf("%d",&n);
    
    int dem;
    for (j=1; j<n; j++){
        so=j; sum=0; dem=0;
        while (so>0) {
            a[dem]=so%10;
            so/=10;
            dem++;
        }
        for (i=dem-1; i>=0; i--) {
            sum=sum+gt(a[i]);
            if (sum==j) {
                printf("%d ",j);
            }
        }   
    }
    
    
}