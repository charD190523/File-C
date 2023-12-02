#include <stdio.h>
int main ()
{
  int i,a;
  scanf ("%d",i);
  while (i>=0)
  {
    scanf("%d",&a);
    printf("%d\n",a*2);
    i=i-1;
  }
  return 0;
}