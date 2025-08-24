#include <bits/stdc++.h>
using namespace std;



int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int t;
        cin >> t;
        
        int temp = sqrt(t);
        if (t == 0) {
            cout << 0 << " " << 0 << endl;
        } else if (temp * temp == t) {
            cout << temp - 1 << " " << 1 << endl;
        } else cout << -1 << endl;
    }
    return 0;
}   