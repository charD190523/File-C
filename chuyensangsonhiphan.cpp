#include <stdio.h>
int main ()
{
    int n,i,a[200];
    scanf("%d",&n);
    int dem=0;
    if (n==0) printf("%d",0);
    while (n>0) {
        a[dem]=n%2;
        n/=2;
        dem++;
    }
    for (i=dem-1; i>=0; i--) {
        printf("%d",a[i]);
    }
}