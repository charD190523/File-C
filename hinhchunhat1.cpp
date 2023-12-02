#include <stdio.h>
int main ()
{
    int i,j,hang,cot,m;
    scanf("%d %d", &cot,&hang);
    for (i=1;i<=cot;i++){
        if (i<=hang){

            for (j=i; j<=hang + i - 1; j++){
                if (j <= hang)
                    printf("%d",j);
                else{
                    m=i-1;
                    while (m>0){
                        printf("%d",m);
                        m--;
                    }
                break;
                }
                
            }
            printf("\n");
        }
        else{

            printf("%d",i);
            m=hang-1;
            while (m>0){
                printf("%d",m);
                m--;
            }
            printf("\n");
        }

    
    }
    return 0;
}