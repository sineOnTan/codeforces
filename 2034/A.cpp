#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main () {
    int n;
    cin >> n;
    int a,b;
    while (n--) {
        cin >> a >> b;

        int res = 1;
        for (int i = 2; i <= a or i <= b; i++) {
            while (a % i == 0 and b % i == 0) {
                res *= i;
                a /= i;
                b /= i;
            }

            while (a % i == 0) {
                res *= i;
                a /= i;
            }

            while (b % i == 0) {
                res *= i;
                b /= i;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}