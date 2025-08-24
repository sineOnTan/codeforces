#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e5 + 5;
int a[N];
int predSum[N];
int elemCount[N];

int32_t main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cases;
    cin >> cases;
    while (cases--) {
        int n, m;
        cin >> n >> m;

        memset(a, 0, sizeof(a[0]) * n);
        memset(elemCount, 0, sizeof(elemCount[0]) * n);
        memset(predSum, 0, sizeof(predSum[0]) * n);
        for (int i = 0; i < m; i++) {
            int temp;
            cin >> temp;
            temp = min(temp, n - 1);
            a[temp]++;
        }

        int elements = 0;
        int pred = 0;
        int res = 0;

        for (int i = 0; i < n; i++) {
            elements += a[i];
            pred += a[i] * i;
            elemCount[i] = elements;
            predSum[i] = pred;
            if (i > n/2) res += max((((1 - n + i) * (elemCount[i - 1] - elemCount[n - i - 1])) + predSum[i - 1] - predSum[n - i - 1]) * 2, (long long)0) * a[i];
            if (i >= n/2) res += ((a[i] * (a[i] - 1)) / 2) * (2 * i - n + 1) * 2;
        }
        cout << res << "\n";
    }
    return 0;
}