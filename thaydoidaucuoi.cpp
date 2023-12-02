# include <stdio.h>
int main ()
{
    int n,k,tg,i;
    int arr[100];
    int so=0;
    scanf("%d",&n);
    k=1;
    for(;n!=0;){
        arr[k]=n%10;
        n/=10;
        k++;
    }
    
    tg=arr[1];
    arr[1]=arr[k-1];
    arr[k-1]=tg;
    for (i=k-1;i>=1;i--){
        so=so*10+arr[i];

    }
    printf("%d",so);
    return 0;

}