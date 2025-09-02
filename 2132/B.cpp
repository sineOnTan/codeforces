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
        vector<int> res;
        for (int i = 1000000000000000000; i > 1; i /= 10){
            if (n % (i + 1) == 0) res.push_back(n / (i + 1));
        }
        cout << res.size() << endl;
        for (auto i : res) cout << i space;
        if (res.size() != 0) cout << endl;
    }
    return 0;
}