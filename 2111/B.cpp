#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    fib.push_back(2);

    for (int i = 3; i < 15; i++) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    while(cases--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            int w,l,h;
            cin >> w >> l >> h;
            if (w >= fib[n] and l >= fib[n] and h >= fib[n] and (w >= fib[n + 1] or l >= fib[n + 1] or h >= fib[n + 1])) {
                cout << 1;
            } else cout << 0;
        }

        cout << endl;
    }
    return 0;
}