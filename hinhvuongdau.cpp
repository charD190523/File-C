#include <stdio.h>
int main()
{
    int i,j,dai;
    scanf("%d",&dai);
    for (i=1;i<=dai;i++){

        for (j=i;j<=dai+i-1;j++)
            printf("*");
        printf("\n");

    }
    return 0;

}