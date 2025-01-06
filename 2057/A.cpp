#include<bits/stdc++.h>
using namespace std;

#define space << " "

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int a,b;
        cin >> a >> b;
        cout << max(a,b) + 1 << endl;
    }
    return 0;
}