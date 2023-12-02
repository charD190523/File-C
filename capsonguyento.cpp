#include <stdio.h>
#include <math.h>
int ktnt (int n) 
{
    int i;
    if (n<2) return 0;
    if (n==2) return 1;
    for (i=2; i<= (int)sqrt(n); i++) {
        if (n % i ==0) {
            return 0;
        }
    }
    return 1;
}
int main () 
{
    int i,t,n;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        for (i=2; i<=n/2; i++) {
            if (ktnt(i)==1 ) {
                if (ktnt (n-i) ==1) {
                    printf("%d %d ",i,n-i);
                }
                else continue;
            }
        }
        printf("\n");
    }
}