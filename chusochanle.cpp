#include <stdio.h>
int main()
{
    int i,n,k,chan=0,le=0;
    
    int du;
    scanf("%d",&n);
    k=0;
    for(;n!=0;)
    {
        du=n%10;
        
        if(du%2==0)
        {
            chan=chan+1;
            
        }
        else
            le=le+1;
        n/=10;

    }
    printf("%d %d",le,chan);
    return 0;
}