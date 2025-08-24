#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        vector<int> nums;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        
        int res = LONG_LONG_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int temp = i * nums[i];

            while (i < nums.size() - 1 and nums[i] == nums[i + 1]) {
                i++;
            }

            temp += (n - i - 1) * nums[i];

            res = min(res, temp);
        }
        cout << res << endl;

    }
    return 0;
}