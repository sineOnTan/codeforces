#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n,k;
        cin >> n >> k;
        if (n == 1 and k == 2) cout << "yes" << endl;
        else if (k == 1 and n == 1) cout << "no" << endl;
        else if (k > 1) cout << "no" << endl;
        else {
            bool flag = true;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0)  {flag = false; break;}
            }
            if (flag) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    return 0;
}