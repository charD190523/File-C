#include <stdio.h>
int main ()
{
    int n,i,j,sl=0;
    ;
    scanf("%d",&n);
    int a[n],b[n],max=0;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        b[i]=1;
        if (max<a[i]) max=a[i];
        
    }
    int sum[max+1];
    for (i=0; i<=max; i++) {
        sum[i]=0;
    }
    for (i=0; i<n; i++) {
        int dem=0;
        if (b[i]==1) {
            for (j=i; j<n; j++) {
                if (a[i]==a[j]) {
                    b[j]=0;
                    dem++;
                }
            }
            if (dem>1) {
                sum[a[i]]=100;
                sl++;
                // printf("%d\n",sl);
            }
        }
    }
    // for (i=0; i<11 ; i++) {
    //     printf("%d ",sum[i]);
    // }
    printf("%d\n",sl);
    for (i=0; i<=max; i++) {
        if (sum[i]==100) {
            printf("%d ",i);
        }
    }
}