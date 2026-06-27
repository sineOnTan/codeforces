#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int power[N];
int jumps[N];


int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        c -= a;
        d -= b;
        bool flag = true;
        if (a > 2 * (b + 1) or b > 2 * (a + 1)) flag = false;
        if (c > 2 * (d + 1) or d > 2 * (c + 1)) flag = false;
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}   