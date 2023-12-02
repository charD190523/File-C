#include<stdio.h>
int main ()
{
    int i,j,hang,cot,bien;
    scanf("%d %d",&cot,&hang);
    char a=64;
    for (i=1; i<=cot; i++){
        if (i<=hang){

            bien=a+i-1;
            for (j=1; j<=hang; j++){
                if (j<hang-i+1){
                    printf("%c",bien);
                    bien++;

                }
                else {
                    printf("%c",bien);
                }
            }
        }

        else {
            for (j=1; j<=hang; j++){
                printf("%c",bien);
            }
        }

            
        
        printf("\n");
    }
}