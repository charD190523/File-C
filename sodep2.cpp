#include <stdio.h>
#include <string.h>
int kt(char s[])
{
    int sum=0;
    int len=strlen(s);
    for (int i=0; i<len-1; i++) {
        sum=sum+s[i]-'0';
    }
    return sum;
}
int main ()
{
    int t;
    scanf("%d\n",&t);
    while (t--){
        char s[501];
        fgets(s,sizeof(s),stdin);
        int i=0,len=strlen(s)-2;
        int check=1;
        if (s[0]!='8'||s[len]!='8') printf("NO\n");
        else {
            if (kt(s)%10!=0) printf("NO\n");
            else {
                while(i<=len){
                    if(s[i]!=s[len]){
                        printf("NO\n");
                        check = 0;
                    }
                    i++;len--;
                    if(check==0) break;
			    }
                if (check==1) printf("YES\n");
            }
        }
        printf(" t=%d ",t);
    }
    

}