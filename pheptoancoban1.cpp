#include <stdio.h>
int main ()
{
    int a,b;
    // double s;
    scanf("%d %d",&a,&b);
    if (b==0) 
        printf("0");
    else
        printf("%d\n%d\n%ld\n%d\n%d\n%0.2f\n",a+b,a-b,(long)a*b,a/b,a%b,(float)a/b);
    return 0;
    
}