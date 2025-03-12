#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        vector<int> nums;
        int num;
        cin >> num;
        int res = 1;
        while (num--) {
            int temp;
            cin >> temp;
            res += temp - 1;
        }
        cout << res << endl;
    }
    return 0;
}