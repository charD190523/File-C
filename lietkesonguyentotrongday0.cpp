#include <stdio.h>
#include <math.h>

int ktnt (int n) 
{
    if (n<2) return 0;
    for (int i=2; i<=(int)sqrt(n); i++) {
        if (n % i ==0) return 0;
    }    
    return 1;
}
int main ()

{
    int n,i,dem=0;
    int a[100],b[100];
    scanf("%d",&n) ;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if (ktnt(a[i])==1) {
            b[dem]=a[i];
            dem++;
        }
    }
    printf("%d ",dem);
    for (i=0; i<dem; i++) {
        printf("%d ",b[i]);
    }

}