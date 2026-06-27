#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int x,y,k;
        cin >> x >> y >> k;

        for (int i = min(x,y); i > 1; i--) {
            if (x % i == 0 and y % i == 0) {
                x /= i;
                y /= i;
            }
        }
        int res = 0;
        for (int i = k; i > 1; i--) {
            while (x % i == 0) {
                x /= i;
                res++;
            }

            while (y % i == 0) {
                y /= i;
                cout << y << " " << res << " " << i << endl;
                res++;
            }
        }

        if (x != 1 or y != 1) cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}   