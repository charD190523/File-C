#include <stdio.h>
#include <string.h>
int main () {
    int t;
    scanf("%d",&t);
    while (t--) {
        char s[10005] ;
        gets(s);
        char x[2]=" ";
        int len=0;
        char *token;
        token=strtok(s,x);
        while (token!=NULL) {
            len ++;
            token=strtok(NULL, " ");
        }
        printf("%d",len);
    }
    return 0;
}