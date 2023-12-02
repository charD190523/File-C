#include <stdio.h>
int main ()
{
    int n,a,du,k;
    scanf("%d",&k);
    while (k-- >0)
    {
        int sum=0;
        scanf("%d",&n);
        for(;n!=0;)
        {
            du=n%10;
            sum=sum+du;
            n/=10;
        }
        printf("%d\n",sum);
    }
    return 0;
}