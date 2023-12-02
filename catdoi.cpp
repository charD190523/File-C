#include <stdio.h>
int main ()
{
    int i,t;
    long long n;
    scanf("%d",&t);
    while (t--) {
        scanf("%lld",&n);
        int a[20];
        int dem=0;
        int check=1;
        long long sum =0;
        while (n>0) {
            a[dem]=n%10;
            dem++;
            n/=10;
        }
        for (i=0; i<dem; i++) {
            if (a[i]==0) continue;
            else if (a[i]==1) continue;
            else if (a[i]==8) a[i]=0;
            else if (a[i]==9) a[i]=0;
            else check =0;
        }
        if (check==1) {
            for (i=dem-1; i>=0; i--) {
                sum=sum*10+a[i];
            }
            if (sum != 0) {

                printf("%lld",sum);
            }
            else printf("INVALID");
        }
        else printf("INVALID");
        // for (i=dem-1; i>=0; i--) {
        //         printf("%d",a[i]);
        // }
        printf("\n");
    }
}