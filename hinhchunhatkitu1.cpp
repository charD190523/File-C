#include <stdio.h>
int main ()
{
    int i,j,hang,cot,gan;
    scanf("%d %d",&cot,&hang);
    char a;

    if(hang>cot)
            a=97+hang-1;
        else
            a=97+cot-1;
    gan=a;
    for (i=1; i<=cot; i++){
        a=gan;
        for (j=1; j<=hang; j++){
            if (j>=i){
                printf("%c",a);
                
            }
            else{
                printf("%c",a);
                a--;
            } 
        }
        printf("\n");
    }
    return 0;
}