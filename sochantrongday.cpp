#include <stdio.h>
int main ()
{
    int a[100],i,n,t;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
            if (a[i]%2==0) printf("%d ",a[i]);
        }
        printf("\n");
    }
}