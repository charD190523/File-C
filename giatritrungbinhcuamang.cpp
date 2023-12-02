#include <stdio.h>
int main ()
{
    int n,i,a[100];
    scanf("%d",&n);
    int sum=0,avr;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%0.3f",(float)sum/n);
}