#include <stdio.h>
int main ()
{
    int m,i,a[100];
    scanf("%d",&m);
    for (i=1; i<=m; i++) {
        scanf("%d",&a[i]);
    }
    for (i=m;i>0;i--) {
        printf("%d ",a[i]);
    }
    return 0;
}