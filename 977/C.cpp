#include <bits/stdc++.h>

using namespace std;
#define int long long

const int N = 2e5 + 4;
int a[N];


int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        queue<int> que;
        set<int> s;
        bool flag = true;

        int n,m,q, temp;;
        cin >> n >> m >> q;
        while (n--) {
            cin >> temp;
            que.push(temp);
        }

        for (int i = 0; i < m; i++) {
            cin >> temp;
            if (temp == que.front()) {
                que.pop();
                s.insert(temp);
            } else if (s.end() == s.find(temp)) {
                cout << "TIDAK" << endl;
                flag = false;
                break;
            }
        }
        if (flag) cout << "YA" << endl;

    }

    return 0;
}