#include <stdio.h>
int main ()
{
    int a;
    int tong=0 ;
    for(;;)
    {
        printf("Nhap a:");
        scanf("%d",&a);
        if (a<0)
            continue;
        if (a==0)
            break;
        tong=tong+a;

    }
    printf("%d",tong);
}
