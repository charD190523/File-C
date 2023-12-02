#include <stdio.h>
int main ()
{
    int i,j,k, a[50][50];
    int n;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            
         
            scanf("%d", &a[i][j]);
            
        }
        
    }
    
    int dd[100]={0};
    for (j=1; j<=n; j++) {
        int dem[100]={0};
        for (i=1; i<=n; i++) {
            dem[a[i][j]] ++;
            // printf("%d ",dem[a[i][j]]);

            if (dd[a[i][j]]!=-1) {
                
                dd[a[i][j]]++;  
                // printf("%d ",dd[a[i][j]]);
            }
            if (dd[a[i][j]] >=2) {

                    a[i][j]=-2;
            }
            

        }
        for (k=1; k<i; k++) {
            if (dem[a[k][j]]<2) {
                dd[a[k][j]]=-1;
            }
            
            
            // printf("%d ",dd[a[k][j]]);
        }
        // printf("\n");
    }
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if (dd[a[i][j]] != -1 && a[i][j] != -2) {
                printf("%d ",a[i][j]);
                // printf("%d ",dd[3]);
            }
        }
    }

    
}