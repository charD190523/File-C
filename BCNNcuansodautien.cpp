#include <bits/stdc++.h>
// #include <algorithm>
using namespace std;
long long bcnn(long long a, long long b) 
{
    int gcd=__gcd(a,b);
    return a*b/gcd;
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long a=1;
        for (long long i=2; i<=n; i++) {
            a=bcnn(a,i);
        }
        cout << a << endl;
    }
    return 0;
}