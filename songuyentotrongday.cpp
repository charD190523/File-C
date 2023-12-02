#include <stdio.h>
#include <math.h>
int ktnt (int n);
int ktnt(int n)
{
    int i,k;
    if (n<2) {
        return 0;
    }
    k=(int) sqrt(n);
    for (i=2; i<=k; i++) {
        if (n%i ==0 ) {
            return 0;
        }
    }
    return 1;

}
int main ()
{
    int t,sl,i,a[100],j;
    scanf("%d\n",&t);
    while (t--) {
        scanf("%d",&sl);
        for (i=1; i<=sl; i++) {
            scanf("%d",&a[i]);
        }
        for (j=1; j<=sl; j++) {
            if (ktnt(a[j])==1) {
                printf("%d ",a[j]);
                
            }
        }
        printf("\n");
    }
}