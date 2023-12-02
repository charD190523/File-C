#include <stdio.h>
int main ()
{
    int n,p=0;
    scanf("%d",&n);
    int a[100],b[100],i;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<=n-1; i++) {
        int m=0,j;
        for (j=0; j<=n-1; j++) {
            if (a[i]==a[j]) {
                m++;
            }
        }
            if (m==1) {
                b[p]=a[i];
                p++;
            }

    }
    printf("%d\n",p);
    for (i=0;i<p;i++) {
        printf("%d ",b[i]);
    }
    return 0;
}