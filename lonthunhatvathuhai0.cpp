#include <stdio.h>
int main ()
{
    int i,n,a[100],max1,max2;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);

    }
    max1=a[0];
    for (i=1; i<n; i++) {
        if (max1<a[i]) max1=a[i];
    }
    for (i=0; i<n; i++) {
        if (a[i]!=max1) {
            max2=a[i];
            break;
        }
    }
    for (i=0; i<n; i++ ) {
        if (max2<a[i] && a[i]!=max1) {
            max2=a[i];
        }
    }
    printf("%d %d",max1,max2);
}