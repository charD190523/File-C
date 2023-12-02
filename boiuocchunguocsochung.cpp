#include <stdio.h>
int main ()
{
    int t,a,b,b1,b2,UCLN,BCNN;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d",&a,&b);
        b1=a; b2=b;
        if (b1==0 || b2==0) {
            printf("%d ",b1+b2);
        }
        while (b1!=0 && b2!=0) {
            if (b1>b2) {
                b1-=b2;
            }
            else {
                b2-=b1;
            }
        }
        UCLN= b1+b2;
        BCNN= (a*b)/b1+b2;
        printf("%d ",BCNN);
        printf("%d\n",UCLN);

    }
    return 0;
}