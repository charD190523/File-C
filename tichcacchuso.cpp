#include <stdio.h>
int main()
{
    int n,du,tich;
    scanf("%d",&n);
    tich=1;
    while (n!=0){
        du=n%10;
        tich=tich*du;
        n/=10;
    }
    printf("%d",tich);
    return 0;
}