#include<stdio.h>
int soHoanHao(int n)
{
    int temp=1;
    if (n==1) {
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0) {
            if(i==n/i)
                temp+=i;
            else 
                temp+=i+n/i;

        }
    }
    if (temp==n) 
        return 1;
    else 
        return 0;
}
int main ()
{
    int a,b,tg,k,bien;
    bien=0;
    scanf("%d %d",&a,&b);
    if (a>b ){
        tg=a;
        a=b;
        b=tg;
    }
    
    for (k=a;k<=b;k++) {
        if (soHoanHao(k))
            printf("%d ",k);
            
    }
}