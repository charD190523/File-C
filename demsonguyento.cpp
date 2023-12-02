#include <stdio.h>
#include <math.h>
int checkchusont (int n);
int checknt( int n);
int checknt (int n) 
{
    if (n < 2) return 0;
    int k = (int ) sqrt(n);
    for (int i=2; i<= k; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int checkchusont(int n) 
{
    while (n>0) {
        int temp = n%10;
        if (checknt (temp) ==0 ) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main ()
{
    int a,b,i,t;
    scanf("%d",&t);
    while (t--) {
        int dem=0;
        scanf("%d %d",&a,&b);
        for (i=a; i<=b; i++) {
            if (checknt(i) ==1 && checkchusont(i) ==1 ) {
                dem ++;
            }
        }
        printf("%d\n",dem);
    }
}