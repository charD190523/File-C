#include <stdio.h>
int checksochan (int n);

int main ()
{
    int t;
    long long n;
    scanf("%d",&t);
    while (t--) {
        int check =1;
        scanf("%lld",&n);
        while ( n != 0) {

            if ( ( n % 10 ) % 2 == 1) {
                check = 0;
                break;
            }
            n/=10;
            // printf("IN RA N: %lld\n",n);
        }
        if ( check == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

    }
}