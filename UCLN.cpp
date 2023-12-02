#include <stdio.h>
int main ()
{
    int a,b,k;
    scanf("%d",&k);
    while(k-- >0)
    {
        scanf("%d %d",&a,&b);
        if (a==0 || b==0)
            printf("%d",a+b); 
        while (a*b != 0)
        {
            if (a>b)
                a%=b;
            else 
                b%=a;
        
        }
        printf("%d\n",a+b);
    }
    return 0;
}