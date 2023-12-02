#include <stdio.h>
int main ()
{
    int n,m,a[100],i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);

    }
    scanf("%d",&m);
    for (i=m; i<n; i++) {
        printf ("%d ",a[i]);
    }
    for (i=0; i<m; i++) {
        printf("%d ",a[i]);
    }
}