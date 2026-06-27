#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e3 + 5;
vector<int> lengths[N];
int path_length[N];


int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++) {
            lengths[i].clear();
            path_length[i] = 0;
        }
        int max_length = 0;
        int index = 0;

        for (int i = 1; i <= n; i++) {
            cout << "? " << i << " " << n << " ";
            for (int j = 1; j <= n; j++) {
                cout << j << " ";
            }
            cout << endl;
            cin >> path_length[i];
            lengths[path_length[i]].push_back(i);

            if (path_length[i] > max_length) {
                max_length = path_length[i];
                index = i;
            }
        }

        vector<int> res;
        int cur = index;

        while(path_length[cur] != 1) {
            res.push_back(cur);

            for (auto i : lengths[path_length[cur] - 1]) {
                cout << "? " << cur << " " << 2 << " " << i << " " << cur << endl;
                int out;
                cin >> out;
                if (out == 2) {
                    cur = i;
                    break;
                }
            }

        }
        res.push_back(cur);
        cout << "! " << res.size() << " ";
        for (auto i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}   