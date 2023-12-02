#include <stdio.h>
#include <string.h>
int main ()
{
    int t,len;
    char a[18];
    scanf("%d",&t);
    while (t--) {
        int check =1;
        scanf ("%s",a);
        len=strlen(a);
        for (int i=0; i<len; i++) {
            for (int j=i+1;j<len; j++) {
                if ( a[i]>a[j]) {
                    check = 0;
                    break;
                }
            }
        }
        if (check == 1) {
            printf("YES\n");

        }
        else 
            printf("NO\n");
    }
}