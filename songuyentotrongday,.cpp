#include <stdio.h>
#include <math.h>
int ktnt (int n) 
{
    int i;
    if (n<2) return 0;
    if (n==2) return 1;
    for (i=2; i<(int )sqrt(n); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

int main ()  
{   
    int i,n,t;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
            if (ktnt (a[i])==1) printf("%d",a[i]);
        }
        printf("\n");
    }
}