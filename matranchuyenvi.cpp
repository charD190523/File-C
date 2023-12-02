#include <stdio.h>
int main ()
{
    int i,j,hang,cot;
    scanf("%d %d",&hang,&cot);
    int a[hang][cot];
    for (i=0; i<hang; i++) {
        for (j=0; j<cot; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<cot; i++) {
        for (j=0; j<hang; j++) {
            printf("%d ",a[j][i]);

        }
        printf("\n");
    }
}