#include <stdio.h>
#include <math.h>
int main ()
{
    int i,n,a,k;
    
    scanf("%d",&k);
    i=0;
    while (i++<k)
    {
        scanf("%d",&n);
        a=sqrt(n);
        if (a*a==n)
            printf("YES \n");
        
        if (a*a!=n)
            printf("NO \n");
        
       
        
    }
    return 0;
}
        
        

    
    
