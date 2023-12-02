#include <stdio.h>
#include <math.h>
int ktnt(int n);
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
    int a[100],i,n,dem=0;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        scanf("%d",&a[i]);
        
    }
    
    for (i=1; i<=n; i++) {
        if (ktnt(a[i])==1) {
            
            dem++;
        }
    }
    printf("%d ",dem);
    for (i=1; i<=n; i++) {
        if (ktnt(a[i])==1) {
            printf("%d ",a[i]);
        }
    }


}