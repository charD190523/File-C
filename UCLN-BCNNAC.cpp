#include<stdio.h>
int main(){
    long a,b,d;
    scanf("%ld %ld",&a,&b);
    long x=b,y=a;
    while(a%b!=0){
    	d=a%b;
    	a=b;
    	b=d;
	}
	long UCLN=b;
	long BCNN=x*y/UCLN;
	printf("%ld\n%ld",UCLN,BCNN);
}