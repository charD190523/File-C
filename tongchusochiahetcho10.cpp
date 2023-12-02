#include <stdio.h>
int main ()
{
    int a,so,sum,t;
    scanf("%d",&t);
    
    while (t--){

        sum=0;
        scanf("%d",&a);
        while (a>0) {
            so=a % 10;
            a/=10;
            sum+=so;
            
            
        }
        if (sum % 10 ==0 )
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}