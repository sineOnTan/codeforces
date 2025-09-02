#include <bits/stdc++.h>
using namespace std;
#define int long long
#define space << " "

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n, k;
        cin >> n >> k;
        int count = 0;
        vector<int> stores;
        for (int i = 0; n != 0; i++) {
            int remainder = n % 3;
            stores.push_back(remainder);
            count += remainder;
            n /= 3;
        }

        if (count > k) cout << -1 << endl;
        else {
            count = k - count;
            count /= 2;
            int res = 0;
            for (int i = stores.size() - 1; count != 0 and i != 0; i--) {
                int temp = min(count, stores[i]);
                stores[i - 1] += temp * 3;
                stores[i] -= temp;
                count -= temp;
            }


            for (int i = 0; i < stores.size(); i++) {
                res += (pow(3, i + 1) + i * pow(3, i - 1)) * stores[i];
            }
            cout << res << endl;
        }
    }
    return 0;
}