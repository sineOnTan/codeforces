#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;

        vector<int> x_values;
        vector<int> y_values;

        vector<pair<int,int>> addresses;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            x_values.push_back(x);
            y_values.push_back(y);

            addresses.emplace_back(x, y);
        }

        sort(x_values.begin(), x_values.end());
        sort(y_values.begin(), y_values.end());

        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        int res = LONG_LONG_MAX;
        for (auto i : addresses) {
            int x_start;
            if (i.first == x_values[0]) x_start = x_values[1];
            else x_start = x_values[0];

            int x_end;
            if (i.first == x_values[n - 1]) x_end = x_values[n - 2];
            else x_end = x_values[n - 1];

            int y_start;
            if (i.second == y_values[0]) y_start = y_values[1];
            else y_start = y_values[0];

            int y_end;
            if (i.second == y_values[n - 1]) y_end = y_values[n - 2];
            else y_end = y_values[n - 1];

            if (x_start == x_end) res = min(res, max(n, y_end - y_start + 1));
            else if (y_start == y_end) res = min(res, max(n, x_end - x_start + 1));

            else if ((y_end - y_start + 1) * (x_end - x_start + 1) < n) 
                res = min(res, (y_end - y_start + 1) * (x_end - x_start + 1) + min((y_end - y_start + 1), (x_end - x_start + 1)));
            else res = min(res, (y_end - y_start + 1) * (x_end - x_start + 1));
        }
        cout << res << endl;
    }
    return 0;
}   