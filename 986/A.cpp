#include <bits/stdc++.h>

using namespace std;
#define int long long

const int lmax = 1e13 + 5;
const int N = 2e5 + 5;

int dp[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,a,b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int x_shift = 0;
        int y_shift = 0;
        bool flag = false;

        for (auto i : s) {
            if (i == 'N') y_shift++;
            if (i == 'S') y_shift--;
            if (i == 'E') x_shift++;
            if (i == 'W') x_shift--;
            if (x_shift == a and y_shift == b) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }

        if (a == 0 and b == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (flag) continue;
        if (x_shift == 0 and y_shift == 0) {
            cout << "NO" << endl;
            continue;;
        }

        int x = 0;
        int y = 0;

        for (auto i : s) {
            if (i == 'N') y++;
            if (i == 'S') y--;
            if (i == 'E') x++;
            if (i == 'W') x--;
            int t;
            if (x_shift != 0) {
                t = (a-x)/x_shift;
            } else {
                t = (b-y)/y_shift;
            }
            if (t > 0 and (t * x_shift + x == a) and (t * y_shift + y == b)) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag) cout << "NO" << endl;
    }
    return 0;
}