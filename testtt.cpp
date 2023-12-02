#include <stdio.h>


void test(int *inp) 
{
    // int a = *inp;
    ++ (*inp) ;
}

void inputArr(int a[], int *size){
    scanf("%d",size);
    for (int i=0; i<*size; i++) {
        scanf("%d",&a[i]);
    }
}

void inmang(int a[], int size)
{
    for (int i=0; i<size; i++) {
        printf("%d",a[i]);
    }
}


int main ()
{
    // Nhap 3 mang co so phan tu lan luot la m, n, l
    int m,n,l;
    int a[100],b[100],c[100];
    // inputArr(a, &m);
    // inmang(a,m);
    // inputArr(b, &n);
    // inmang(b,n);
    // inputArr(c, &l);
    // inmang(c,l);

    inputArr(a, &m);
    inmang(a, m);
    inputArr(b, &n);
    inmang(b, n);
    inputArr(c, &l);
    inmang(c, l);



    // scanf("%d",&m);
    // inputArr(a, m);
    // printf("%d\n",a);
    // scanf("%d",&n);
    // inputArr(b, n);
    // scanf("%d",&l);
    // inputArr(c, l);
    
    // for (int i=0; i<m; i++) {
    //     scanf("%d",&a[i]);
    // }
    // for (int i=0; i<n; i++) {
    //     scanf("%d",&b[i]);
    // }
    // for (int i=0; i<l; i++) {
    //     scanf("%d",&c[i]);
    // }

    // int a = 10;
    // printf("%d\n",a);
    // test(&a);
    
    // printf("%d",a);
}