#include <stdio.h>
int main ()
{
    int i,j,n,t;
    scanf("%d",&t);
    for (int k=1; k<=t; k++) {
        scanf("%d",&n);
        int a[100],b[100];
        for (i=0; i<n; i++) {
            scanf("%d",&a[i]);
            b[i]=1;
        }
        printf("Test %d:\n",k);
        for (i=0; i<n; i++) {
            int dem=0;
            if (b[i]==1) { 
                for (j=i; j<n; j++) {
                    if (a[i]==a[j]) {
                        b[j]=0;
                        dem++;
                    }
                }
                printf("%d xuat hien %d lan\n",a[i],dem);
            }
        }
    }
}