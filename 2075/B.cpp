#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 5005;
int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,k;
        cin >> n >> k;

        for (int i = 0; i < n; i++) {cin >> a[i];}
        int res = 0;

        if (n == 1) res = a[0];
        else if (k == 1) {
            for (int i = 1; i < n - 1; i++) res = max(res, a[i] + max(a[0], a[n - 1]));
            res = max(res, a[0] + a[n - 1]);
        } else {
            priority_queue<int> pq;
            for (int i = 0; i < n; i++) pq.push(a[i]);
            for (int i = 0; i <= k; i++) {res += pq.top(); pq.pop();}
        }
        cout << res << endl;
    }
    return 0;
}