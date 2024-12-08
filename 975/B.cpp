#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 101000;

// int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n,q;
        cin >> n >> q;
        // int a[N];
        vector<int> segments;
        for (int i = 0; i < n; i++) {
            int input;
            cin >> input;
            segments.push_back(input);
        }

        sort(segments.begin(), segments.end());

        int size = segments.size();


        while (q--) {
            int query;
            cin >> query;
            int result = 0;
            int flag = true;
            if (powl((size + 1), 2) - 4 * (query + 1) <= 0) {
                flag = false;
            }
            auto temp = (size + 1 - sqrtl(powl((size + 1), 2) - 4 * (query + 1)))/2.0;
            if (temp - (int) temp != 0) {
                flag = false;
            }
            if (flag) {
                int first = floor((size + 1 - sqrtl(powl((size + 1), 2) - 4 * (query + 1)))/2.0);
                int second = ceil((size + 1 + sqrtl(powl((size + 1), 2) - 4 * (query + 1)))/2.0);

                if (first == second) {
                    result++;
                } else {
                    result += 2;
                }
            }
            flag = true;

            if (powl(size, 2) - 4 * query <= 0) {
                flag = false;
            }
            temp = (size - sqrtl(powl(size, 2) - 4 * query <= 0))/2.0;
            if (temp - (int) temp != 0) {
                flag = false;
            }
            int lower = (size - sqrtl(powl(size, 2) - 4 * query <= 0))/2.0;
            int upper = (size + sqrtl(powl(size, 2) - 4 * query <= 0))/2.0;
            result += max((int)0, segments[upper] - segments[lower] - 1);

            cout << result << " ";

        }
        cout << endl;
    }
    return 0;
}