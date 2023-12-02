#include <stdio.h>
int main () 
{
    int i,j,t,k,hang,cot;
    scanf("%d",&t);
    for (k=1; k<=t; k++) {

        scanf("%d %d",&hang,&cot);
        int a[hang][cot];
        for (i=0; i<hang; i++) {
            for (j=0; j<cot; j++) {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Test %d:\n",k);
        for (i=1; i<hang; i++) {
            for (j=1; j<cot; j++) {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}