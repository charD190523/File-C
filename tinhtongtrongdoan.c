#include <stdio.h>
int main ()
{
    int a,b,i,sum,tg;
    scanf("%d %d",&a,&b);
    sum=0;
    if (a>b)
    {
        tg=a;
        a=b;
        b=tg;

    }

    for (i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}