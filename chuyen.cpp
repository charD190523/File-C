#include <stdio.h>
int main()
{
    int nhap;
    int ngay;
    int nam;
    int tuan;
    
    scanf("%d",&nhap);
    if (nhap<=1000)
    {
        nam=nhap/365;
        
        tuan=nhap/7;
        ngay=nhap-tuan*7;
        printf("%d %d %d",nam,tuan,ngay);
    }

}