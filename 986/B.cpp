#include <bits/stdc++.h>

using namespace std;
#define int long long

const int N = 2e5 + 5;

int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {

        int n,b,c;
        cin >> n >> b >> c;
        if (b == 0) {
            if (c < (n - 2)) cout << (-1) << endl;
            else {
                if (c == (n - 1) or c == (n-2)) cout << (n-1) << endl;
                else cout << n << endl;
            }
        } else {
            if (c >= n) cout << n << endl;
            else cout << n - (((n - 1) - c)/b + 1) << endl;
        }
    }
    return 0;
}