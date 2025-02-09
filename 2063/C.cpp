#include <bits/stdc++.h>
using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        map<int,set<int>> connections;
        int nodes;
        cin >> nodes;
        for (int i = 0; i < nodes - 1; i++) {
            int a,b;
            cin >> a >> b;
            connections[a].insert(b);
            connections[b].insert(a);
        }
        int best = 1;
        vector<int> b_nodes;
        for (auto i : connections) {
            if (i.second.size() > best) {
                best = i.second.size();
                b_nodes.clear();
                b_nodes.push_back(i.first);
            } else if (i.second.size() == best) {
                b_nodes.push_back(i.first);
            }
        }
        if (nodes == 2) cout << 0 << endl;
        else if (nodes == 3) cout << 1 << endl;
        else {
            int res = 0;
            int cur_node = b_nodes[0];
            for (auto i : connections[cur_node]) {
                connections[i].erase(cur_node);
            }
            set<int> temp;
            swap(connections[cur_node], temp);
            int second = 0;
            for (auto i : connections) {
                second = max(second, int(i.second.size()));
            }
            swap(connections[cur_node], temp);
            for (auto i : connections[cur_node]) {
                connections[i].insert(cur_node);
            }
            res = max(int(connections[cur_node].size()) + second - 1, res);
            if (b_nodes.size() >= 2) {
                int cur_node = b_nodes[1];
                for (auto i : connections[cur_node]) {
                    connections[i].erase(cur_node);
                }
                set<int> temp;
                swap(connections[cur_node], temp);
                int second = 0;
                for (auto i : connections) {
                    second = max(second, int(i.second.size()));
                }
                swap(connections[cur_node], temp);
                for (auto i : connections[cur_node]) {
                    connections[i].insert(cur_node);
                }
                res = max(int(connections[cur_node].size()) + second - 1, res);
            }

            cout << res << endl;
        }
    }
    return 0;
}