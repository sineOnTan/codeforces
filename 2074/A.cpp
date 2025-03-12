#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a == b and b == c and c == d) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}