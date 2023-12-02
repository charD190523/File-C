#include <stdio.h>
int main ()
{
    int i,n,k;
    scanf("%d",&k);
    while (k-- >0)
    {
        scanf("%d",&n);
        i=2;
        while (i<=n)
            if (n%i==0)
            {
                n/=i;
            
                printf("%d ",i);
                i=2;
            }
            else 
                i++;
        printf("\n");
    }
    return 0;

}