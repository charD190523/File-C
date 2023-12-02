#include <stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int i,n,tich=1;
        scanf("%d",&n);
        for (i=2;i<=n;i++) {
            int count=0;
            while (n%i==0) {
                n/=i;
                count++;
            }
            if (count>=1)   tich=tich*i;
        }
        printf("%d\n",tich);
    }
}