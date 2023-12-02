#include <stdio.h>
int checkkhonggiam (int n)
{
    int temp = n%10;
    n/=10;
    while (n>0) {
        if ( n % 10 > temp) {
            return 0;
        }
        temp = n % 10;
        n /= 10;
    }
    return 1;
}
int main ()
{
    int t,a,b;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&a);
        b=1;
        for (long long  i=1; i<=a; i++) {
            b=b*10;
        }
        for (long long  i=b/10; i < b; i++) {
            if (checkkhonggiam(i) == 1) printf("%lld ",i);
            
        }
        printf("\n");
    } 
}