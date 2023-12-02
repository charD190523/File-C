#include <stdio.h>
int main ()
{
    int i,j,cao,rong;
    scanf("%d %d",&rong,&cao);
    for(i=1;i<=cao;i++)
    {

        for(j=i;j<=rong+i-1;j++)
        {

            if(i==1||i==cao)
                printf("*");
            else if(i==j||j==rong+i-1)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}