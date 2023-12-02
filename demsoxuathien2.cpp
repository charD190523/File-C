#include <stdio.h>
int main ()
{
    int t,d=0;
    scanf("%d",&t);
    while (t--) {
        d++;
        int n,i,j,dem;
        scanf("%d",&n);
        int a[n+1],b[n+1];
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
            b[i]=0;
        }
        printf("Test %d:\n",d);
        for (i=0; i<n; i++) {
            if (b[i]==1){
                continue;
            }
            b[i]=1;
            dem=1;
            for (j=i+1;j<n;j++) {
                if (a[i]==a[j]) {
                    dem ++;
                    b[j]=1;
                }
            }
            printf("%d xuat hien %d lan\n",a[i],dem);
        }
    }
    return 0;
}