#include <iostream>
using namespace std;
int main () 
{
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
        b[i]=1;
    }
    int dem=0;
    for (int i=0; i<n; i++) {
        
        if (b[i]) {
            for (int j=0; j<n; j++) {
                if (a[i]==a[j]) {
                    b[j]=0;
                }
            }
            c[dem]=a[i];
            dem++;
        }
        
        // if (b[i]) {
        //     c[dem]=a[i];
        //     dem++;
        // }
    }
    for (int i=0; i<dem; i++) {
        for (int j=i+1; j<dem; j++) {
            if (c[i]>c[j]) {
                int tg=c[i];
                c[i]=c[j];
                c[j]=tg;
            }
        }
        cout << c[i] << " ";
    }
    // for (int i=0; i<dem; i++) {
    //     cout << c[i];
    // }

}