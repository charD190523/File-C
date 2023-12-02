#include <stdio.h>
int main ()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if (a>b) {
        max=a;
    }
    else {
        max=b;
    }
    int maxv=a*b,bcnn;
    for (int i=max; i<=maxv; i++) {
        if (i%a == 0 && i % b == 0) {
            bcnn = i;
            break;
            
        }
    }
        
    while (a!=0 && b!=0) {
        if (a>b) {
            a=a-b;

        }
        else {
            b=b-a;
        }
    }
    printf("%d\n", a+b);
    printf("%d",bcnn);
    
    
}