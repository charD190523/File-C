#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    scanf("%d %d",&a,&b);
    printf("%d ",a+b);
    printf("%d ",a-b);
    printf("%d ",a*b);
    printf("%0.2f ",float(a)/float(b));
    printf("%d ",a%b);
    
    return 0;

}