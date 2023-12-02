#include <stdio.h>
int main () {
    int t,i,j,n;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        long long  a[n];
        for (i=0; i<n; i++) {
            scanf("%lld",&a[i]);
        }
        for (i=0; i<n; i++) {
            int check=1;
            for (j=i+1; j<n; j++) {
                if (a[i]<=a[j]) check=0;
            }
            if (check) printf("%lld ",a[i]);
        }
        printf("\n");
    }
}