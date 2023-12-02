#include <stdio.h>
#include <string.h>
int doixung(char *st);
int main ()
{
    int t,i,j;
    char s[120];
    scanf("%d",&t);
    while (t--) {
        scanf("%s",&s);
        
        if (doixung(s)==1) {
            printf("YES\n");

        }
        else 
            printf("NO\n");
    }
}
int doixung(char *st)
{
    int i,j;
    int dem=0;
   for(i=0,j=strlen(st)-1;i<strlen(st)/2;j--,i++)
    if(st[i]!=st[j]){
        dem++;
    }
    if (dem==1||dem==0) {
        return 1;
    }
    return 0;
}