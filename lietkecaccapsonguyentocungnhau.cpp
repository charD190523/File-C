#include <stdio.h>
int main ()
{
    int a,b,i,j,dem,bien1,bien2;
    scanf("%d %d",&a,&b);
    for (i=a; i<=b; i++) {
        for (j=i+1; j<=b; j++) {
            bien1=i;bien2=j;
            while (bien1!=0 && bien2!=0) {

                if (bien1>bien2) {
                    bien1-=bien2;
                }
                else {
                    bien2-=bien1;
                }
            }
            
            if (bien1+bien2 ==1) {
                printf("(%d,%d)",i,j);
                printf("\n");
            }
            
        }
    }
}