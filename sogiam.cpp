#include <stdio.h>
int check (int n)
{
    int c=n%10;
    if (n>=10){

        n/=10;
        while (n >0) {
            if (n%10<=c) {
                return 0;
            }
            c=n%10;
            n/=10;
            
        }    
    }
    return 1;
}
int main ()
{
    int t;
    long long a,b,i,n,count,bien;
    scanf("%d",&t);
    while (t--) {
        count=0;
        scanf("%lld %lld",&a,&b);
        if (a<10) a=10;
        for (i=a; i<=b; i++) {
            if (check(i)==1) {
                count ++;
                // printf("%lld ",i);
            }
                
        }
        printf("%lld\n",count);
    }
}