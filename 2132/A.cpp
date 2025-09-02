#include <bits/stdc++.h>
using namespace std;
#define int long long
#define space << " "

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b;
        cin >> b;
        string c;
        cin >> c;

        for (int i = 0; i < c.size(); i++) {
            if (c[i] == 'V') a = b[i] + a;
            else a = a + b[i];
        }
        cout << a << endl;
    }
    return 0;
}