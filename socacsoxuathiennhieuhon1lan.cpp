#include <stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        int n;
        scanf("%d",&n);
        int a[100],b[100],i,j;
        int sl=0;;
        for ( i=0; i<n; i++) {
            scanf("%d",&a[i]);
            b[i]=1;
        }
        for (i=0; i<n; i++) {
            int dem=0;
            if (b[i]==1){
                for (j=i; j<n;j++) {
                    if (a[i]==a[j]) {
                        b[j]=0;
                        dem++;
                    }
                }
                if (dem>1) sl++;
            } 
        }
        printf("%d\n",sl);
    }
}