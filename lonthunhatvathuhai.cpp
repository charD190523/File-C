#include <stdio.h>
int main ()
{
    int i,j,max1,max2,n,a[100],min;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        scanf("%d",&a[i]);
    }
    max1=a[1];
    for (i=1; i<=n; i++) {
        if (a[i]>max1) {
            max1=a[i];
        }
    } 
    max2=0;
    for (i=1; i<=n; i++) {
        if (a[i]>max2 && a[i]<max1) {
            max2=a[i];
        }
    }
    printf("%d %d",max1,max2);
    return 0;

}