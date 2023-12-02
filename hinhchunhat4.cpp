#include <stdio.h>
int main ()
{
    int i,j,hang,cot,k,m,chay,bien,dem;
    scanf("%d %d", &cot, &hang);
    bien= hang;
    for (i=cot; i>=1; i--){
        if (i<=hang){
            dem=0;
            k=bien;
            bien--;
            while (k>0){
                printf ("%d",k);
                k--;
                dem++;
            }
            for (j=2; j<= hang-dem+1; j++)
                printf("%d",j);
            printf("\n");
        }
        else {
            chay=hang;
            m=i;
            while (chay>0){
                printf("%d",m);
                m--;
                chay--;
            }
        printf("\n");
        }
    }
}