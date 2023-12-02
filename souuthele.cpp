#include <stdio.h>
int main ()
{
    int i,t;
    long long n;
    scanf("%d",&t);
    while (t--) {
        int chan=0,le=0;
        scanf("%lld",&n);
        while (n>0) {
            if (n%10 % 2 ==0) {
                chan +=1;
            }
            else {
                le+=1;
            }
            n/=10;
        }
        
        if (chan<le) printf("YES");
        else printf("NO");
        printf("\n");
    }
}