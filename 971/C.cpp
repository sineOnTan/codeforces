#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int x, y, k;
        cin >> x >> y >> k;
        int x_count = x/k;
        int y_count = y/k;

        if (x % k != 0) {
            x_count++;
        }
        if (y % k != 0) {
            y_count++;
        }

        if (x_count > y_count) {
            cout << 2 * x_count - 1 << endl;
        } else {
            cout << 2 * y_count << endl;
        }

    }
    return 0;
}