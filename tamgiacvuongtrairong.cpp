#include <stdio.h>
int main ()
{
    int i,j,n,dai;
    scanf("%d",&dai);
    n=1;
    for(i=1;i<=dai;i++){

        for(j=i;j<=n+i-1;j++)
            if (i==1||i==dai)
                printf("*");
            else if(j==i||j==n+i-1)
                printf("*");
                
            else 
                printf(".");
        printf("\n");
        n++;
    }
    return 0;
}