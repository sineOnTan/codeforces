#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 1010;

int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n,k;
        cin >> n >> k;
        k %= 4;
        if (k == 2) cout << "NO" << endl;
        else if (k == 0) cout << "YES" << endl;
        else if (k == 3) {
            if (n % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (k == 1) {
            if (n % 2 == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}