#include <stdio.h>
int main ()
{
    int t,a,b,n,check,i;
    scanf("%d",&t);
    
    while (t--) {
        scanf("%d %d",&a,&b);
        check=true;
        
        
        while (check==true) {

            n=2;
            for (i=a;i<=b;i++) {
                if (n%i !=0) {
                    n+=2;
                    i=a;
                    printf("%d  %d\n",i,n);
                    continue;
                }
                else {
                    printf("%d chia het cho %d\n",n,i);
                }
                
                    

                
               
            }
            if (i=b) {
                // printf("%d\n",n);
                check=false;
            }
        }

        
    }
}