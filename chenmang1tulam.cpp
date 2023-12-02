#include <stdio.h>
int main ()
{
    int m,n,i,j,a[100],b[100],k;
    scanf("%d %d",&m,&n);
    for (i=0; i<m; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++) {
        scanf("%d",&b[i]);
    }
    
    scanf("%d",&k);
    for (i=0; i<k; i++) {
        printf ("%d ",a[i]);
    }
    for (i=0; i<n; i++) {
        printf("%d ",b[i]);
    }
    for (i=k; i<m; i++) {
        printf("%d ",a[i]);
    }
}