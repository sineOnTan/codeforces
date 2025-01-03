#include<bits/stdc++.h>
using namespace std;

#define space << " "

const int N = 1010;

int res[N];
vector<pair<int,int>> moves;

int32_t main () {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> res[i];
    }

    for (int i = 1; i < m; i++) {
        for (int j = i + 1; j <= m; j++) {
            moves.emplace_back(j, i);
        }
    }

    set<int> solved;
    for (int i = 0; i < m; i++) {
        for (int j = res[i] + 1; j <= m; j++) {
            if (solved.find(j) == solved.end()) moves.emplace_back(res[i], j);
        }
        solved.insert(res[i]);
    }

    cout << moves.size() << endl;
    for (auto i : moves) cout << i.first space << i.second << endl;
}