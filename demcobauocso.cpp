#include <bits/stdc++.h>
using namespace std;
int ktnt (long long n)
{
    int i,k;
    if (n<2) {
        return 0;
    }
    k=(int) sqrt(n);
    for (i=2; i<=k; i++) {
        if (n%i ==0 ) {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int count=0;
        for (int i=0; i<=(long long)sqrt (n); i++) {
            if (ktnt(i)==1) {
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}