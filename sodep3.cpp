#include<stdio.h>
#include <math.h>
#include <string.h>
int ktnt ( int n) 
{
    if (n<2) return 0;
    for (int i=2; i<(int)sqrt(n); i++) {
        if (n % i ==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d\n",&t);
    while (t--) {
        char s[505];
        fgets (s, sizeof(s), stdin);
        int i=0,len=strlen(s)-2, check=1,j=0;
        for (i=0; i<=len; i++) {
            if (ktnt(s[i]-'0')==0) {
                printf("NO\n");
                break;
            }
            else {
                while (j<=len) {
                    if (s[j]!=s[len]) {
                        printf("NO\n");
                        check=0;
                    }
                    j++;len--;
                    if (check==0) break;
                }
                if (check==1) {
                    printf("YES\n");
                    break;
                }
                
            }
            
        }
        // printf("\n");
    }
}