#include <stdio.h>
#include <string.h>
int main ()
{
    int i;
    char s[100],n[100];
    gets(s);
    gets(n);
    char m[strlen(n)];
    for (i=0; i<strlen(n); i++) {
        m[i]=n[i];
    }
    char *token;
    token=strtok(s, m);
    while (token!=NULL) {
        printf("%s ",token);
        token =strtok(NULL,m);
    }
}