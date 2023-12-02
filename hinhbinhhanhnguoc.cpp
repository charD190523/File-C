#include <stdio.h>
int main ()
{
    int i,j,rong,dai,dau;
    scanf("%d %d",&rong,&dai);
    dau=0;
    for (i=1;i<=rong;i++){

        for(j=i;j<=dai+dau+i-1;j++)

            if(j<=dau+i-1)
                printf("~");
            else
                printf("*");
        dau=i;
        
        printf("\n");
    }
    return 0;
    
}