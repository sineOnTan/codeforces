#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int nums;
        cin >> nums;
        vector<int> num_vec;
        bool pos = false;
        bool neg = false;
        int greatest = -1005;
        for (int i = 0; i < nums; i++) {
            int num;
            cin >> num;
            if (num >= 0) pos = true;
            greatest = max(greatest, num);
            num_vec.push_back(num);
        }
        int res = 0;
        if (pos) for (auto i : num_vec) res += abs(i);
        else {
            res += 2 * greatest;
            for (auto i : num_vec) {
                res += abs(i);
            }
        }
        cout << res << endl;
    }
    return 0;
}