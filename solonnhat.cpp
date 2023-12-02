#include <stdio.h>
int main ()
{
    int i,t,n,max,dem;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        int a[100];
        int dem=0,max=0;
        for (i=0; i<n; i++) {
            scanf("%d",&a[dem]);
            if (max<a[dem]) {
                max=a[dem];
            }
            dem++;
        }
        printf("%d\n",max);
        for (i=0; i<dem;i++) {
            if (a[i]==max) printf("%d ",i);
        }
        printf("\n");
    }
}