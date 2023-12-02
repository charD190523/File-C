#include <stdio.h>
 
int main(){
    int n,t;
    scanf("%d",&t);
    while (t--){
        scanf("%d", &n);
        int dem;
        int bien=n;
        printf("%d = ",bien);
        for(int i = 2; i <= n; i++){
            dem = 0;
            while(n % i == 0){
                ++dem;
                n /= i;
            }
            if(dem){
                if(dem > 1) printf("%d^%d", i, dem);
                else printf("%d^1", i);
                if(n > i){
                    printf(" * ");
                }
            }
        }
        printf("\n");
    }
    
}