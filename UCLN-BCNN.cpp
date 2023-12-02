#include <stdio.h>
int main ()
{
    int max,b1,b2,S;
    long a,b;
    scanf("%ld %ld",&a,&b);
    S=a*b;
    if (a==0 || b==0) {
        printf("%d\n",a+b);
    }  
    while (a!=0 && b!=0) {
        if (a>b) {
            a-=b;
        }
        else {
            b-=a;
        }
    }
    printf("%d\n", a+b);
    printf("%d\n",S/(a+b));
    
    return 0;
}