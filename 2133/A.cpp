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
        set<int> s;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            int gear;
            cin >> gear;
            if (s.find(gear) != s.end()) flag = true;
            s.insert(gear);
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}   