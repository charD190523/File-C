#include <stdio.h>
int checkthuannghich (int n)
{
    int a[20];
    int i,dem=0;
    while (n>0) {
        a[dem]= n % 10;
        n /= 10;
        dem ++;
    }
    for (i=0; i< dem/2; i++) {
        if ( a[i]!=a[dem-i-1]) {
            return 0;
        } 
    }
    return 1;
}
int main ()
{
    int t;
    long long n;
    scanf("%d",&t);
    while (t--){

        scanf("%lld",&n);
        int bien =n;
        int sum=0;
        int check =1;
        while (bien >0) {
            if (bien%10%2==0) {
                check =0;
                break;
            }
            else {
                sum += bien % 10;
                bien/=10;
            }
        }
        if (checkthuannghich(n)==1 ) {
            if (check ==1 && sum % 2 ==1){

                printf("YES\n ");
            }
            else
                printf("NO\n");
        }
        else {
            printf("NO\n");
        }
        
    }
    return 0;
}