#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int num;
        cin >> num;

        if (ceil(log2(num)) == floor(log2(num)) or ceil(log2(num + 1)) == floor(log2(num + 1))) {cout << -1 << endl; continue;}
        else {
            int temp = num;
            int res = 1;
            while (temp % 2 == 0) {
                res *= 2;
                temp /= 2;
            }
            temp = num;
            int t1 = 1;
            while (temp % 2 == 1) {
                t1 *= 2;
                temp /= 2;
            }
            res += t1;
            cout << res << endl;
        }
    }
    return 0;
}