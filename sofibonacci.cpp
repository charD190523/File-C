#include <stdio.h>
long long  fb(int n)
{
    
    long long  f[100],i;
    if (n<2) return 1;
    else f[0]=f[1]=1;
    for (i=2;i<=n;i++) {
        f[i]=f[i-2]+f[i-1];
    }
    return f[n];
}
int main ()
{
    int t,n;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        printf("%lld\n",fb(n-1));
        
    }
    return 0;
}