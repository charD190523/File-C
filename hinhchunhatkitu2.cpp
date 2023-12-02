#include <stdio.h>
int main ()
{
    // cot : độ dài cột; hang: độ dài hàng.
    int i,j,hang,cot,bien,dem;
    scanf("%d %d",&cot,&hang);
    char a=65;
    for (i=1; i<=cot; i++){
        bien = a+i-1;
        if (i <= hang){

            for (j=i; j<=hang+i-1; j++){
                if (j<= hang){
                    printf("%c",bien);
                    bien++;
                }
                else {
                    dem = hang+i-j;
                    bien =a+i-2;
                    while (dem>0){
                        printf("%c",bien);
                        dem--;
                        bien--;

                    }
                break;
                }

            }  
            printf("\n");
        }
        else{
            bien = a+hang-1;
            dem=hang;
            while (dem>0){
                printf("%c",bien);
                bien--;
                dem--;

            }
        printf("\n");

        }
    }
    return 0;
}