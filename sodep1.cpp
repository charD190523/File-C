#include <stdio.h>
#include <math.h>
int fibo (int n);
int ktfb (int n);
int ktnt (int n);
int fibo (int n)
{
    if (n==0 || n==1) {
        return n;
    }
    return fibo (n-1)+fibo(n-2);
    
}
int ktfb (int n)
{
    int check=1;
    int dem=0;
    while (check){

        if (n!=fibo(dem)&& n>fibo(dem)) {
            dem++;
        }
        else if (n==fibo(dem)) {
            return 1;
        }
        else {
            check = 0;
            return 0;
        }
    }
    
}
int ktnt(int n)
{
    int i,k;
    if (n<2) {
        return 0;
    }
    k=(int) sqrt(n);
    for (i=2; i<=k; i++) {
        if (n%i ==0 ) {
            return 0;
        }
    }
    return 1;

}
int main ()
{
    int a,b,i,bien,sum,tg;
    scanf("%d %d",&a,&b);
    if (a>b) {

        tg=a;
        a=b;
        b=tg;
    }
    for (i=a;i<=b;i++) {
        sum =0;
        bien=i;
        while (bien >0) {
            sum = sum + bien%10;
            bien = bien/10;
        }
        
        if (ktfb(sum)==1 && ktnt(i)==1) {
            printf("%d ",i);
        } 
    }
    

}