#include <iostream>
#include <math.h>
using namespace std;
int ktnt (int n)
{
    if (n==0 || n==1) {
        return 0;
    }
    for (int i=2; i<=(int)sqrt(n);i++) {
        if (n%i==0) return 0;
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
        for (int i=2; i<=n/2; i++) {
            if (ktnt(i)==1) {
                if (ktnt(n-i)==1) {
                    cout << i<< " " << n-i <<endl;
                }
            }
        }
    }
}