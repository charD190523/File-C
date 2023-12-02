#include <stdio.h>
int main ()
{
    int n,dau,cuoi,i;
    scanf("%d",&i);
    while (i-->0)
    {
        scanf("%d",&n);
        cuoi=n%10; 
        for(;n!=0;)
        {
            n/=10;
            if (n<10)
            {
                dau=n;
            
                break;
            }

        }
        
        if (dau==cuoi)
            printf("YES\n");
        else 
            printf("NO\n");
        
    }
    return 0;
    
}