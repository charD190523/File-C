#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n],b[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
            b[i]=1;
        }
        int sum=0;
        for (int i=0; i<n; i++) {
            int dem=0;
            if (b[i]) {
                for (int j=i; j<n; j++) {
                    if (a[i]==a[j]) {
                        dem ++;
                        b[j]=0;
                    }
                }
            } 
            if (dem > 1) sum+=dem;
        }
        cout << sum << endl;
    }
}