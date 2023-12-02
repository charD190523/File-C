#include <stdio.h>
int main ()
{
    int i,j,bien,canh,dem;
    scanf("%d",&canh);
    char a=64;
    dem=0;
    for (i=canh; i>0; i--) {
        bien=a+canh-1-dem;
        dem++;
        for (j=i; j>0; j--) {
            printf("%c",bien);
            bien++;
        }
        printf("\n");
    }
    
}