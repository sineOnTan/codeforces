#include <bits/stdc++.h>
using namespace std;
#define int long long
 
const int N = 2e5 + 5;
int arr[N];
 
int32_t main () {
    int cases;
    cin >> cases;
 
    while (cases--) {
        int n;
        cin >> n;
        vector<int> grumps;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            grumps.push_back(temp);
        }
        sort(grumps.begin(), grumps.end());
        reverse(grumps.begin(), grumps.end());
        int res = 0;
        for (int i = 0; i < grumps.size(); i += 2) {
            res += grumps[i];
        }
        cout << res << endl;
    }
    return 0;
}   