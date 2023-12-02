#include <stdio.h>
int main ()
{
    int a,b,sum1,sum2,b1,b2;
    sum1=0;
    sum2=0;
    scanf("%d %d",&a,&b);
    b1=a;
    b2=b;
    while (b1>0) {
        sum1 += b1 % 10;
        b1 /= 10;
        
    }
    while (b2>0) {
        sum2 += b2 % 10;
        b2 /= 10;
    }
    
    if (sum1 > sum2 ) {
        printf("%d %d",b,a);
    }
    else 
        printf("%d %d",a,b);
    
}