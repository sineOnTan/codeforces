#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        int res;
        int pred = 0;
        if (n % 10 >= 7) {
            res = n % 10 - 7;
        } else {
            int t = n % 10 + 10;
            res = n % 10 + 10 - 7;
        }
        pred += n% 10;
        n /= 10;
        for (int i = 1; n != 0; i++) {
            int temp = n % 10;
            if (temp == 7) {
                res = 0;
            } else if (temp == 8) {
                res = min(res, 1 + pred);
            } else if (temp > 8) {}
            else if (temp + pred >= 7) {
                res = min (res, 7 - temp);
            } else {
                res = min(res, 7 + 1 - temp);
            }
            pred += n % 10 * pow(10,i);
            n /= 10;
        }
        if (pred < 7) res = min(res, 8);
        else res = min(res, 7);
        cout << res << endl;
    }
    return 0;
}   