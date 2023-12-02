#include <stdio.h>
int main()
{
    int i,n,du,dau,cuoi;
    scanf("%d",&n);
    dau=n%10;
    for (;n!=0;){
        du=n%10;
        n/=10;
        if (n<10)
            cuoi=n;


    }
    printf("%d %d",dau,cuoi);
    return 0;
}