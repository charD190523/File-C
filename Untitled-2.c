#include <stdio.h>
int main ()
{
    int n;
    int du;
    int sum=0;
    int i=1;

    printf("Nhap vao so:");
    scanf("%d",n);
    while (n>0)
        du=n%2;
        sum=sum +(i*du);
        i=i*10;
        n=n/2;
    printf("So sau khi chuyen doi: %d",sum);   
    return 0;
}