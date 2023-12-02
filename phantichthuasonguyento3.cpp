#include <stdio.h>
int main ()
{
    int i,j,t,n,count,bien,bien1;
    scanf("%d",&t);
    int x=1;
    while (x<=t) {
        scanf("%d",&n);
        printf("Test %d: ",x);
        for (i=2; i<=n; i++){

            count=0;
            while (n%i==0) {
                n/=i;
                count++;
                
            }
            if (count>0) {
                printf("%d(%d) ",i,count);
            }
        }
        printf("\n");
        x++;
    }
    return 0;
}