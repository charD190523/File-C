#include <stdio.h>
int main ()
{
    int i,j,hang,cot,bien;
    scanf("%d %d",&cot,&hang);
    char a=65+hang-1;
    
    
    for (i=cot; i>0; i--) {
        // bien = a- (hang-cot);
        for (j=1; j<=hang; j++) {
            if (j<=hang-i) {
                printf("%c",a-(hang-i-j+1));
            }
            else {
                printf("%c",a);
            }
        }
        printf("\n");
    }
    return 0;
}