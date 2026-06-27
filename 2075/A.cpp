#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,k;
        cin >> n >> k;
        int res = 0;
        if (n % 2 == 1) {
            if (k % 2 == 1) {
                n -= k;
                res++;
                k--;
            } else {
                n -= k - 1;
                res++;
            }
        } else {
            if (k % 2 == 1) {
                k--;
            }
        }
        if (n % k != 0) res++;
        cout << n / k + res << endl;
    }
    return 0;
}