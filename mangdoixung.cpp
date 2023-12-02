#include <stdio.h>
int main ()
{
    int t,n,h;
    scanf("%d",&t);
    while (t--) {
        h=0;
        scanf("%d",&n);
        long a[n];
        for (int i=0; i<n;i++) {
            scanf("%ld",&a[i]);

        }
        if (n%2==0) {
            for (int i=0; i<(n/2); i++) {
                if (a[i]!=a[n-1-i]) {
                    h++;
                    break;
                }
            }
        }
        else {
            for (int i=0; i<((n-1)/2); i++) {
                if (a[i]!=a[n-1-i]) {
                    h++;
                    break;
                }
            }
        }
        if (h==0) {
            printf("YES");
        }
        else printf("NO");
        printf("\n");
    }
}