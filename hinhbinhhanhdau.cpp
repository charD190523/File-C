#include <stdio.h>
int main ()
{
    int i,j,dai,dau;
    scanf("%d",&dai);
    dau=dai-1;
    for(i=1;i<=dai;i++){

        for(j=i;j<=dai+dau+i-1;j++)

            if(j<=dau+i-1)
                printf("~");
            else
                printf("*");
        dau--;
        
        printf("\n");
    }
    return 0;
}