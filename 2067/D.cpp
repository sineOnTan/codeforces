#include <bits/stdc++.h>
using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        if (s.size() < n) {
            int res = -1;
            for (int i = 1; i <= n; i++) {
                if (s.find(i) == s.end()) {
                    if (i == 1) cout << "? " << i << " " << i + 1 << endl;
                    else cout << "? " << i << " " << i - 1 << endl;
                    cin >> res;
                }
            }
            if (res == 0) cout << "! A" << endl;
            else cout << "! B" << endl;
        } else {
            int a, b;
            cout << "? 1 " << n << endl;
            cin >> a;
            cout << "? " << n << " 1" << endl;
            cin >> b;
            if (a + b >= n + 1) {
                cout << "! B" << endl;
            } else cout << "! A" << endl;
        }
    }
    return 0;
}   