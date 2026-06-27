#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        const int N = 30;
        int a[N];
        for (int i = 0; i < N; i++) a[i] = 0;
        int n;
        cin >> n;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a[temp]++;
            if (res == 0 and a[0] >= 3 and a[1] >= 1 and a[2] >= 2 and a[3] >= 1 and a[5] >= 1) res = i + 1; 
        }
        cout << res << endl;
    }
    return 0;
}