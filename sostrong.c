#include <stdio.h>
int gt(int n);
int main ()
{
    int a,so,nguyen;
    int sum=0;
    scanf("%d",&a);
    nguyen=a;
    for(;a!=0;)
    {
        so=a%10;
        a/=10;
        sum=sum+ gt(so);
    }
   
    if(sum==nguyen)
        printf("1");
    else
        printf("0");
    
    return 0;
    
}
int gt(int n)
{
    int i;
    long giaithua=1;
    for (i=1;i<=n;i++)
        giaithua=giaithua*i;
    return giaithua;
}