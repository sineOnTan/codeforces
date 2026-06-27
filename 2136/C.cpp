#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;

        int best = 0;
        map<int,queue<int>> m;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m[temp].push(best);
            if(m[temp].size() == temp) {
                best = max(m[temp].front() + temp, best);
                m[temp].pop();
            }
        }
        cout << best << endl;
    }
    return 0;
}   