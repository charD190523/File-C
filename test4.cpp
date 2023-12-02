#include <stdio.h>
#include <math.h>
int ktnt(int n);
int checkthuannghich (int n);
int ktnt(int n)
{
    int i,k;
    k=(int) sqrt(n);
    if (n<2) {
        return 0;
    }
    for (i=2; i<=k; i++) {
        if (n%i ==0 ) {
            return 0;
        }
    }
    return 1;

}
int main ()
{
    int i,a,b;
    scanf("%d %d",&a,&b);
    for (i=a; i<b; i++) {
        if (ktnt(i)==1) {
            printf("%d ",i);
        }
    }
    return 0;
}