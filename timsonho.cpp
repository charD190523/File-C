#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    int max;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if (b<a)
    {
        max=b;
    }
    if (c<max)
    {
        max=c;
    }
    printf("%d",max);
    return 0;
}
