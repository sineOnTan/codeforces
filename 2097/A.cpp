#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        map<int,int> m;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        int pred = 0;
        bool valid = false;
        bool force = false;
        for (auto i : m) {
            if (i.second >= 4) {
                force = true;
                break;
            } else if (i.second >= 2) {
                if (valid and pred + 1 == i.first) {
                    force = true;
                    break;
                }
                valid = true;
            } else if (i.second == 0 or pred + 1 != i.first) {
                valid = false;
            }
            pred = i.first;
        }
        if (force) cout << "Yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}   