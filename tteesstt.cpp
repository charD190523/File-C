#include <stdio.h>
#include <string.h>
int main () {
    int t;
    scanf("%d\n",&t);
    while (t--){
        char s[200] ;
        gets(s);
        int dem =0;
        int len=strlen(s);
        for (int i=0; i<len; i++) {
            if (s[i]==' ' && s[i+1]!=' '){
                dem++;
            }
        }
        if (s[0]==' '){
            printf("%d\n",dem);
        }
        else 
            printf("%d\n",dem+1);
    }
    return 0;
}