#include <stdio.h>
int main ()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        b[i]=1;
    }
    for (i=0; i<n; i++) {
        int dem=0;
        if (b[i]==1) {
            for (j=i; j<n; j++) {
                if (a[i]==a[j]) {
                    b[j]=0;
                    
                }
            }
            printf("%d ",a[i]);
        }
    }
}