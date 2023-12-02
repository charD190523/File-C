#include <stdio.h>
int main ()
{
    int t,n,i,j;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        int dem=1,a[100];
        
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
        }
        for (i=1; i<n; i++) {
            int check=1;
            for (j=0; j<i; j++) {
                
                if (a[i]<a[j]) {
                    check=0;
                }
            }
            if (check==1) {
                dem++;
            }
        }
        printf("%d\n",dem);
    }
}