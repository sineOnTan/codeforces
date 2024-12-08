#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        multiset<int> s;
        int temp;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            s.insert(temp);
            sum += temp;
        }
        if (n <= 2) {
            cout << "-1" << endl;
            continue;
        }
        int mid = *next(s.begin(), floor(n/2.0));
        cout <<  max(mid * n * 2 - sum + 1, (long long)0) << endl;
    }
    return 0;
}