// Bai nay sai
#include <stdio.h>
#include <math.h>
int main ()
{
    int k,n,so,x;
    double a,b;
    scanf("%d",&n);
    k=1;
    x=2;
    while (so <n) {
        a= pow(x, k-1);
        b=pow(x,k);
        so=a*(b-1);
        printf("%d ",so);
        k++;
    }

}