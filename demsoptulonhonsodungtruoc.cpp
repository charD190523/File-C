#include <stdio.h>
int main ()
{
    int t,i,j;
    scanf("%d",&t);
    while (t--) {
        int n,a[100];
        scanf("%d",&n);
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
        }
        int dem=1;
        for (i=1; i<n; i++) {
            int c=1;
            for (j=0; j<i; j++) {
                if (a[j]>a[i]) {
                    c=0;
                    break;
                }

            }
            if (c) {
                dem++;  
            } 
                // printf("%d ",dem);
        }
        printf("%d\n",dem);
    }
    return 0;
}