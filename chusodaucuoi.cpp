#include <stdio.h>
int main()
{
    int i,n,du,dau,cuoi;
    scanf("%d",&n);
    cuoi=n%10;
    for (;n!=0;){
        du=n%10;
        if (n<10)
            dau=n;
        n/=10;


    }
    printf("%d %d",dau,cuoi);
    return 0;
}