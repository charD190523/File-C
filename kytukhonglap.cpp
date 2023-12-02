#include <iostream>
#include <string.h>
using namespace std;
int main () 
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        int b[n];
        for (int i=0; i<n; i++) {
            b[i]=1;
        }
        for(int i = 0;i<n; i++){
            int dem=0;
		    if(b[i]){
			    for(int j=i;j<n;j++){
				    if(s[i]==s[j]){
					    dem++;
					    b[j]=0;
				    }
			    }	
		        if(dem<=1) cout << s[i];
		    }
        }
        cout << endl;
    }
}