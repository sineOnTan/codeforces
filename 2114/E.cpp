#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int max_val[N];
int min_val[N];
int val[N];
int parent[N];

set<int> edges[N];

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {cin >> val[i]; edges[i].clear();}
        for (int i = 0; i < n - 1; i++) {
            int v,u;
            cin >> v >> u;
            edges[v].insert(u);
            edges[u].insert(v);
        }


        vector<int> cur;
        vector<int> next;

        parent[1] = 0;
        max_val[0] = 0;
        min_val[0] = 0;

        cur.push_back(1);

        while (cur.size() != 0) {
            int c_node = cur.back();
            cur.pop_back();

            max_val[c_node] = max(val[c_node], val[c_node] - min_val[parent[c_node]]);
            min_val[c_node] = min(val[c_node], val[c_node] - max_val[parent[c_node]]);

            for (auto i : edges[c_node]) {
               edges[i].erase(c_node);
               next.push_back(i); 
               parent[i] = c_node;
            }

            if (cur.size() == 0) swap(cur,next);
        }

        for (int i = 1; i <= n; i++) cout << max_val[i] << " ";
        cout << endl;
    }
    return 0;
}   