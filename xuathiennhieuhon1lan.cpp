#include <stdio.h>
int main ()
{
    int n,p=1,m,j;
    scanf("%d",&n);
    int a[100],b[100],i,k;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n; i++) {
        m=0;
        for (j=i; j<n; j++) {
            if (a[i]==a[j]) {
                m++;
            }
        }
        if (m>1) {
            // printf("%d %d  \n",a[i],m);
            for (k=0; k<p;k++) {
                printf("%d %d  \n",b[k],a[i]);
                if (b[k]==a[i]){
                    break;
                }
                else {
                    b[p]=a[i];
                    // printf("%d %d  .\n",p,m);
                    // printf("%d ",b[p]);
                    p++;
                }
            }
            
        }

    }
    
    // for (i=1;i<=p;i++) {
    //     printf("%d ",b[i]);
    // }
    return 0;
}