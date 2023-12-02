#include <stdio.h>
int kt (long long  n) 
{
    int a[20],i,dem=0;
    while (n>0) {
        a[dem]=n%10;
        n/=10;
        dem++;
    }
    if (a[0]!=a[dem-1]*2 && a[dem-1]!=a[0]*2) return 0;
    for (i=1; i<(dem-1)/2; i++)
    {
        if (a[i]!=a[dem-i-1]) {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    while (t--){
        scanf("%lld",&n);
        if (kt (n)==1) {
            printf("YES");
        }
        else printf("NO");
        printf("\n");
    }
    return 0;
}