#include <stdio.h>
#include <math.h>
int kt(int n);
int kt (int n)
{
    int i,dem,k;
    k= (int) sqrt(n);
    dem=0;
    if (n < 2)
        return 0;
    for (i=2; i<=k; i++) {
        if (n%i ==0){
            
            return 0;
        }
    }
    
      
    return 1;
}
int main ()
{
    int n,a,dem;
    scanf("%d",&a);
    dem=0;
    n=2;
    while (dem<a) {
        if (n==2) {
            printf("%d",2);
            dem++;
            n++;
            printf("\n");
            continue;
        }
        if (kt(n)==1) {
            dem++;
            printf("%d",n);
            printf("\n");
        }
        n+=2;
        
    }
    return 0;
}