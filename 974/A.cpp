#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 1010;

int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int people,k, money = 0;
        int result = 0;
        cin >> people >> k;
        while (people--) {
            int value;
            cin >> value;
            if (value >= k) {
                money += value;
            } else if (value == 0 and money != 0) {
                money--;
                ++result;
            }
        }
        cout << result << endl;
    }
    return 0;
}