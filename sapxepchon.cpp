#include <stdio.h>
int main ()
{
    int a[100],n,x=1,min,i,j,t;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);

    }
    for (i=0; i<n-1; i++) {
        printf ("Buoc %d: ",x);
        min =i;
        for (j=i+1;j<n;j++) {
            if (a[j]<a[min]) {
                min=j;
            }
        }
        t=a[min]; a[min]=a[i]; a[i]=t;
        for (j=0; j<n;j++) {
            printf("%d ",a[j]);
            
        }
        x++;
        printf("\n");
    }
}