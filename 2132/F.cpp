#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
set<int> edges[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n + 4; i++) edges[i].clear();

        for (int i = 0; i < m; i++) {
            int u,v;
            cin >> u >> v;
            edges[u].insert(v);
            edges[v].insert(u);
        }

        
    }
    return 0;
}   