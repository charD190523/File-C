#include <stdio.h>
int main ()
{
    int i,n,dem,a[100];
    scanf("%d",&n);
    
    int tg=0;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n/2; i++) {
        tg=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=tg;
    }
    for (i=0; i<n; i++) {
        printf("%d ",a[i]);
    }
}