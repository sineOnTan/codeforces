#include <bits/stdc++.h>
#define int long long
using namespace std;

#define space << " "

const int N = 40;
int a[N];
int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        cout << 2 * n << endl;
        for (int i = 1; i <= n; i++) {
            cout << i space << 1 space << max((long long)1, i - 1) << endl;
            cout << i space << i space << n << endl;
        }
    }
    return 0;
}