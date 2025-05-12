#include <bits/stdc++.h>
using namespace std;
#define int long long

#define YES cout << "yes" << endl
#define NO cout << "no" << endl

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        vector<int> nums;
        int start;
        cin >> start;
        start = abs(start);
        nums.push_back(start);
        for (int i = 1; i < n; i++) {
            int temp;
            cin >> temp;
            nums.push_back(abs(temp));
        }

        auto median = ceil(n/2.0);

        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        if (nums[median - 1] < start) NO;
        else YES;
    }
    return 0;
}   