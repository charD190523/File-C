#include <stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    i=0;
    for(;n!=0;){
        n/=10;
        i++;
        
    }
    printf("%d",i);
    return 0;
    

}