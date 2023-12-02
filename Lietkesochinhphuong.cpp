#include <stdio.h>

int main()
{
    int m,n,i,j,k,sum;
    int t;
    int start,end;
    // int arr[10000];
    scanf("%d %d",&m,&n);
    if (m<0)
        m=0;
    if (n<0)
        n=0;

    k = 0;

    while (k*k < m){
        ++k;
    }
    start =0;
    end =0;

    if (k*k <= n){
        start = k;
        while (k*k <= n)
        {
            ++k;
        }
        end = k-1;
    }
    
    
    printf("%d \n",(end-start+1));

    
    for (i=start;i<=end;i++){

        printf("%d \n",i*i);
    }
    
    return 0;
}