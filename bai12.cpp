#include <stdio.h>
#include <math.h>
int main ()
{
    int a;
    int b;
    int c;
    float delta,x1,x2;
    scanf("%d %d %d",&a,&b,&c);
    delta=b*b-4*a*c;
    if ( delta<0)
    {
        printf("NO");
    }
    else if (delta==0)
    {
        x1=-b/(2*a);
        printf("%0.2f",x1);

    }
    else
    {
        delta=sqrt(delta);
        x1=(-b+delta)/(2*a);
        x2=(-b-delta)/(2*a);
        printf("%0.2f %0.2f",x1,x2);

    }
    return 0;
    
}