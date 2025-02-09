#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        map<int,vector<int>> connections;
        int nodes;
        cin >> nodes;
        for (int i = 0; i < nodes; i++) {
            int a,b;
            cin >> a >> b;
            connections[a].push_back(b);
            connections[b].push_back(a);
        }
        int best = 1;
        int count = 0;
        for (auto i : connections) {
            if (i.second.size() > count) {
                best = i.first;
                count = 1;
            } else if (i.second.size() == connections[best].size()) {
                count++;
            }
        }
        if (nodes == 2) cout << 0 << endl;
        else if (nodes == 3) cout << 1 << endl;
        else if (count >= 3) cout << (connections[best].size() * 2) - 1;
        else {
            // int res = 1 + ;
        }
    }
    return 0;
}