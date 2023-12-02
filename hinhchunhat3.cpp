#include <stdio.h>
int main ()
{
    int i,j,hang,cot,k,m,chay;
    scanf("%d %d", &cot, &hang);
    for (i=1; i<= cot; i++){
        if (i<=hang){
            k=i;
            while (k>0){
                printf ("%d",k);
                k--;
            }
            for (j=2; j<= hang-i+1; j++)
                printf("%d",j);
            printf("\n");
        }
        else {
            chay=hang;
            m=i;
            while (chay>0){
                printf("%d",m);
                chay--;
                m--;
            }
        printf("\n");
        }
    }
}