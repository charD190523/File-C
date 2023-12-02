#include <stdio.h>
int main()
{
    int i,n,k,chan,le;
    int du;
    
    scanf("%d",&k);
    while (k-- >0)
    {
        chan=0;
        le=0;
        scanf("%d",&n);
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
        printf("%d %d\n",le,chan);
    }
    return 0;
}