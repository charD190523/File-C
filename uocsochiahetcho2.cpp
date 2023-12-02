#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int count =0;
        for (int i=1; i<=(int)sqrt(n); i++) {
            if (n%i==0) {
                if (i%2==0) count++;
                if ((n/i)%2==0) count++;
            }
            // cout << i <<" " << count;
             
        }
        // if (n%2==0) count++;
        cout << count << endl;
    }
    return 0;
}