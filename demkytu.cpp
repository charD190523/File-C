#include <stdio.h>
#include <string.h>
int main () {
    int i;
    char s[1000];
    gets(s);
    int chu=0, so=0, kt=0;
    for (i=0; i<strlen(s); i++) {
        if ((int)s[i]>=48&&((int )s[i])<=57) so++;
        else if (((int )s[i]>=65 && (int )s[i]<=90)||((int)s[i]>=97)&&((int)s[i])<=122) chu++;
        else kt++;
    }
    printf("%d %d %d",chu,so,kt);
}