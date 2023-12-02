#include <stdio.h>
int fb (int n);
int fb (int n)
{
    if (n==0||n==1) {
        return n;
    }
    return fb(n-2)+fb (n-1);
}
int main ()
{
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("%d ",fb(i));
    }
}