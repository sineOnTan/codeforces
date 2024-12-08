#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, k, temp;

        cin >> n >> k;

        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            pq.push(temp);
        }
        int res = 0;
        bool first = true;;

        while (pq.size() != 0) {
            if(first) {
                res += pq.top();
                pq.pop();
            } else {
                res -= pq.top();
                pq.pop();
                temp = min(k, res);
                res -= temp;
                k -= temp;
            }

            first = !first;
        }
        cout << res << endl;
    }
    return 0;
}
