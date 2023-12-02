#include <stdio.h>
int main ()
{
    long  a,b,b1,b2,UCLN,BCNN;
	int t;
    scanf("%d",&t);
    while (t--) {
		int d=0;
        scanf("%ld %ld",&a,&b);
        b1=a; b2=b;
        if (b1==0 || b2==0) {
            printf("%d ",0);
        }
        while (b1%b2!=0) {
            d=b1%b2;
			b1=b2;
			b2=d;
        }
        UCLN= b2;
        BCNN= (a*b)/UCLN;
        printf("%ld ",BCNN);
        printf("%ld\n",UCLN);

    }
    return 0;
}