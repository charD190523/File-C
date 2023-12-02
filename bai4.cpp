#include <stdio.h>
int main ()
{
    int i,a;
    scanf("%d",&i);
    
    while(i-- >0)
    {
        // printf("%d",i);
        scanf("%d",&a);
        double s=(double)1/a;
        printf("%0.15f\n",s);
    } 
    return 0;

}