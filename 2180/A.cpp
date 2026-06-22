#include<bits/stdc++.h>
using namespace std;

#define space << " "

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int l,a,b;
        cin >> l >> a >> b;

        set<int> seen;
        int res = 0;
        int i = 0;

        while (!seen.count((a + (i * b)) % l)) {
            seen.insert((a + (i * b)) % l);
            res = max(res, (a + (i * b)) % l);
            i++;
        }
        cout << res << endl;
    }
    return 0;
}