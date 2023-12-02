#include <stdio.h>
#include <string.h>

int main ()
{
    int i,len;
    char s[100];
    fgets(s, sizeof(s),stdin);
    len=strlen(s)-2;
    int check=1;
    // for (i=0; i<len; i++) {
    //     printf("%s",s[i]);
    // }
    while(i<=len){
        if(s[i]!=s[len]){
            printf("0\n");
            check = 0;
        }
        i++;len--;
        if(check==0) break;
	}
	if(check == 1 ) printf("%d",0);
    
}