#include <stdio.h>
#include <math.h>
int ktnt (int n) {
    if (n<2) return 0;
    if (n==2) return 1;
    for (int i=2; i<=(int)sqrt(n); i++) {
        if (n % i ==0) {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int i,t,k;
    scanf("%d",&t);
    
    for (k=1; k<=t; k++) {
        long n;
        scanf("%ld",&n);
        int max=0;

        long long  a[100],b[100],dem[100];  
        for (i=0; i<n; i++) {
            scanf("%lld",&a[i]);
            b[i]=1;
            dem[i]=0;
            if (max<a[i]) max=a[i];
        }
        printf("Test %d:\n",k);
        for (i=0; i<n; i++) {
            if (b[i]==1) {

                for (int j=i; j<n; j++) {
                    if (a[i]==a[j] && ktnt (a[i])==1) {
                        b[j]=0;
                        b[a[i]]=-9;
                        dem[a[i]]++;
                    }
                }
            }
        }
        for (i=0; i<=max; i++) {
            if (b[i]==-9) printf("%d xuat hien %lld lan\n",i,dem[i]);
        }
        
    }
}