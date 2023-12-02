#include <stdio.h>
int main ()
{
    int m,n,c,a[100],b[100],i;
    scanf("%d %d",&m,&n);
    for (i=1; i<=m; i++) {
        scanf("%d",&a[i]);
    }
    
    for (i=1; i<=n; i++) {
        scanf("%d",&b[i]);
    }
    scanf("%d",&c);
    for (i=1; i<=c; i++) {
        printf("%d ",a[i]);

    }
    for (i=1;i<=n; i++) {
        printf("%d ",b[i]);
    }
    for (i=c+1; i<=m; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}