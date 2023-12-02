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
    so=n; sum=0;
    int dem=0;
    for (j=1; j<n; j++){

        while (j>0) {
            a[dem]=j%10;
            j/=10;
            dem++
        }
        for (i=dem-1; i>=0; i--) {
            sumn=sum+gt(a[i]);
            if (sum=so) {
                printf("%d",so);
            }
        }   
    }
    
    
}