#include <stdio.h>
int main ()
{
    int i,j,dai,n;
    scanf("%d",&dai);
    n=1;
    for(i=1;i<=dai;i++){
        
        for (j=1;j<=n;j++)
            printf("*");
        n++;
        printf("\n");
    }
    return 0;
}