#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,k;
        cin >> n >> k;
        int operations = 0;
        if (k == 1) {
            operations += n;
            n = 0;
        }
        while (n != 0) {
            if (k > n) {
                operations += n;
                n = 0;
                break;
            }
            n -= powl(k, floor(log2l(n)/log2l(k)));
            operations++;
        }
        cout << operations << endl;
    }
    return 0;
}