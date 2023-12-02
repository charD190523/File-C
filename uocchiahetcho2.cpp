#include <stdio.h>
#include <math.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        int i,count=0;
        long long n;
        scanf("%lld",&n);
        for (i=1; i<=(int)sqrt(n); i++ ) {
            if (n%i==0) {
                if (i%2==0) count++;
                if (n/i%2==0) count++;
                if (n/i==i && i%2==0) count--;
            }
            // printf(" %d %d\n",i,count);
        }
        printf("%d\n",count);
    }
}