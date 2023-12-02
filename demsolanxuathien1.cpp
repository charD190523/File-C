#include <stdio.h>
int main ()
{
    int i,j,n;
    scanf("%d",&n);
    int a[100],b[100];
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
                    dem++;
                }
            }
            printf("%d %d\n",a[i],dem);
        }
    }
}