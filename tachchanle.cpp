#include <stdio.h>
int main ()
{
    int a[100],chan[100],le[100];
    int n,i,demchan=0,demle=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if (a[i]%2==0) {
            chan[demchan]=a[i];
            demchan++;
        }
        else {
            le[demle]=a[i];
            demle++;
        }
    }
    for (i=0; i<demchan; i++) {
        printf("%d ",chan[i]);
    }
    printf("\n");
    for (i=0; i<demle; i++) {
        printf("%d ",le[i]);
    }
}