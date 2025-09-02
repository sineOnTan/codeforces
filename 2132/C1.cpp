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
        int res = 0;
        for (int i = 0; n != 0; i++) {
            int remainder = n % 3;
            res += (pow(3, i + 1) + i * pow(3, i - 1)) * remainder;
            n /= 3;
        }
        cout << res << endl;
    }
    return 0;
}