#include <stdio.h>
int tongchuso (int n)
{
    int tong=0;
    while (n>0) {
        tong=tong+n%10;
        n/=10;
    }
    return tong;
}
int main ()
{
    int i,n;
    scanf("%d",&n);
    int bien=n;
    int tong =0;
    int tong1=0;
    for (i=2; i<=n; i++) {
        
        while (n % i ==0) {
            n /=i;
            if (i>=10) {
                tong1 = tong1 +tongchuso(i);
            }
            else {
                tong1 += i;
            }
        }
    }
    // while (bien>0) {
    //     tong = tong + bien %10;
    //     bien /= 10;
    // }
    tong=tongchuso(bien);
    if (tong == tong1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    // printf("%d %d ", tong, tong1);

}