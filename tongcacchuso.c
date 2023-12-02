#include <stdio.h>
int main ()
{
    int n,a,du;
    int sum=0;
    scanf("%d",&n);
    for(;n!=0;)
    {
        du=n%10;
        sum=sum+du;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}