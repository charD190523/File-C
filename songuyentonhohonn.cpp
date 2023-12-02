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
    int j,a;
    scanf("%d",&a);
    if (a >= 2){
        printf("%d", 2);
        printf("\n");
    }
    for (j=3; j<=a; j+=2) {
        if (kt(j)==1) {
            printf("%d",j);
            printf("\n");
        }
        
    }
}