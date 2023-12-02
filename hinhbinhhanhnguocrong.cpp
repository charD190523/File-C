#include <stdio.h>
int main ()
{
    int i,j,dai,rong,dau;
    scanf("%d %d",&rong,&dai);
    dau=0;
    for (i=1;i<=rong;i++){

        for (j=i;j<=dai+dau+i-1;j++)
            if(j<=dau+i-1)
                printf("~");
            else if (i==1||i==rong)
                printf("*");
            else if(j==dau+i||j==dau+dai+i-1)
                printf("*");
            else 
                printf(".");
        dau=i;
        printf("\n");
    }
    return 0;
}