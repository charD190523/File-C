#include <bits/stdc++.h>
using namespace std;
int ktnt(long long n) 
{
    if (n<2) return 0;
    else {
        for (long long i=2; i<=(long long)sqrt(n); i++) {
            if (n%i==0) return 0;
        }
    }
    return 1;
}
int checktanggiam (long long n)
{
    if (n%10>n%10%10) {
        n/=10;
        while (n>10) {
            if (n%10<n%10%10) return 0;
            n/=10;
        }
    }
    else {
        n/=10;
        while (n>10) {
            if (n%10>=n%10%10) return 0;
            n/=10;
        }
    }
    return 1;
}
int main ()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count=0;
        for (long long i=pow(10,n-1); i<pow(10,n); i++) {
            if (checktanggiam(i)==1 && ktnt (i)==1) {
                count++;
                cout << i << " ";
            }
        }
        // cout << count << endl;
    }
    return 0;
}