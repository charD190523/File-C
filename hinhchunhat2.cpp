#include <stdio.h>
int main ()
{
    int i,j,hang,cot,m,dem,lech,chay;
    scanf("%d %d", &cot,&hang);
    for (i=1 ; i<=cot ;i++){
        if (i<=hang){
            dem=0;
            for (j=i ; j<= hang+i-1 ;j++){
                if ( j<= hang){
                    printf("%d",j);
                    dem++;
                }
                else{
                    m=hang-1;
                    lech=hang-dem;
                    while (lech>0){
                        printf("%d",m);
                        m--;
                        lech--;
                    }
                break;
                }

            }
            printf("\n");
        }
        else {
            // printf("%d",i);
            m=i;
            chay=hang;
            while (chay>0){
                printf("%d",m);
                m--;
                chay--;
            }
        printf("\n");
        }
    }
    return 0;
}