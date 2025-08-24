#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5 + 5;
int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,m,k;
        cin >> n >> m >> k;
        if (k % n != 0) k = k/n + 1;
        else k /= n;

        int bestSoFar = k;
        int hi = k;
        int lo = 0;

        while (lo <= hi) {
            int mid = (hi + lo) / 2;

            if ((m / (1 + mid)) * mid + ((m) % (1 + mid)) >= k) {hi = mid - 1; bestSoFar = mid;}
            else {lo = mid + 1;}
        }
        cout << bestSoFar << endl;
    }
    return 0;
}