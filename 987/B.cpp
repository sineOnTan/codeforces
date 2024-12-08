#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N = 200010;

int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int sticks;
        cin >> sticks;
        for (int i = 1; i <= sticks; i++) cin >> a[i];
        for (int i = 1; i <= sticks - 1; i++) {
            if (a[i] == i) continue;
            if (a[i + 1] == i and a[i] == i + 1) {
                a[i] = i;
                a[i + 1] = i + 1;
                continue;
            }
            break;
        }

        bool flag = false;;

        for (int i = 1; i <= sticks; i++) {
            if (a[i] != i) flag = true;
        }

        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
    return 0;
}