#include <stdio.h>
#include <math.h>

int main ()
{
    int t,n,i;
    scanf("%d",&t);
    while (t--) {
        int dem;
        scanf("%d",&n);
        if ( n% 2 ==0) {
            dem=1;
        }
        i=1;
        
        while (i++<=n/2) {
            
            if ( n % i ==0 && i % 2 ==0) {
                dem++;
                
            }
            else 
                continue;
            
        }
        printf("%d\n",dem);
    }
}