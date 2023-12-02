#include <stdio.h>
int gt(int n);
int gt (int n)
{
    int i,gt;
    gt=1;
    for (i=2;i<=n;i++) {
        gt*=i;
    }
    return gt;
}
int main ()
{
    int i,b,c,a[20],so,sum,j,tg;
    scanf("%d %d",&b,&c);
    if (b>c) {
        tg=b;
        b=c;
        c=tg;
    }
    
    int dem;
    for (j=b; j<=c; j++){
        so=j; sum=0; dem=0;
        while (so>0) {
            a[dem]=so%10;
            so/=10;
            dem++;
        }
        for (i=dem-1; i>=0; i--) {
            sum=sum+gt(a[i]);
            if (sum==j) {
                printf("%d ",j);
            }
        }   
    }
    
    
}