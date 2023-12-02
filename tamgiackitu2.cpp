#include <stdio.h>
int main ()
{
    int i,j,canh,bien,dem;
    char a=65;
    scanf("%d",&canh);
    dem=0;
    for (i=canh; i>0; i--) {
        bien=a+2*dem;
        dem++; 
        for (j=i; j>0; j--) {
            printf("%c",bien);
            bien+=2;
        }
        printf("\n");
    }
}