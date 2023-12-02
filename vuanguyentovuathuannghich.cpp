#include <stdio.h>
#include <math.h>
int ktnt(long n);
int checkthuannghich (long  n);
int ktnt(long n)
{
    int i,k;
    if (n<2) {
        return 0;
    }
    k=(int) sqrt(n);
    for (i=2; i<=k; i++) {
        if (n%i ==0 ) {
            return 0;
        }
    }
    return 1;

}
int checkthuannghich (long n)
{
    int a[20];
    int i,dem;
    dem=0;
    while (n>0) {
        a[dem]=n%10;
        dem++;
        n/=10;
    }
    for (i=0; i<dem/2; i++) {
        if (a[i]!=a[dem-i-1]) {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int i,t;
    long a,b,n;
    scanf("%d",&t);
    while (t--) {
        int dem=0;
        scanf("%ld %ld",&a,&b);
        for (i=a; i<=b; i++) {
            
            if (ktnt(i)==1 && checkthuannghich(i)==1) {
                printf("%d ",i);
                dem++;
            }
            if (dem == 10 ) {
                printf("\n");
                dem=0;
            }
        }
        printf("\n");
        printf("\n");
    }
}