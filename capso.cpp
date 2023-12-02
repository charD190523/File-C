#include <stdio.h>
int UCLN (int a,int b)
{
    if (a ==0 || b==0) {
        return a+b;
    }
    while (a*b != 0) {
        if (a<b) {
            b=b-a;
        }
        else 
            a=a-b;
    }
    return a+b;
}
int main ()
{
    int t,a,b,c,d;
    scanf ("%d",&t);
    while (t--){

        scanf ("%d %d %d %d",&a,&b,&c,&d);
        if (UCLN(a,b) == UCLN (c,d)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}