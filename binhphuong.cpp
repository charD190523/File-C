#include <stdio.h>
int main ()
{
    int k;
    long bp,n;
    scanf("%d",&k);
    while (k-- >0){

        scanf("%ld",&n);
        bp=n*n;
        printf("%ld\n",bp);
    }
    return 0;
}