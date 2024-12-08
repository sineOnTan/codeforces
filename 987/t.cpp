#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N = 10010;

int elevations[N];
vector<pair<int,int>> roads[N];
int optimals[N][70];


int32_t main () {
    int n,m,k;

    cin >> n >> m >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> elevations[i + 1];
    }

    for (int i = 0; i < m; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        roads[a].emplace_back(b,c);
        roads[b].emplace_back(a,c);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 70; j++) {
            optimals[i][j] = LONG_LONG_MAX;
        }
    }

    // node, colors, cost

    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> q;
    // optimals[1][0] = 0;
    q.emplace(0, make_pair(0,1));

    while (q.size() != 0) {
        auto temp = q.top();
        q.pop();

        if (optimals[temp.second.second][temp.second.first] <= temp.first) continue;
        optimals[temp.second.second][temp.second.first] = temp.first;

        for (auto i : roads[temp.second.second]) {
            q.emplace(temp.first + max((long long)0, elevations[i.first] - elevations[temp.second.second]), make_pair(temp.second.first | 1 << (i.second - 1), i.first));
        }
    }
    if (optimals[n][(1 << k) - 1] == LONG_LONG_MAX) cout << -1 << endl;
    else cout << optimals[n][(1 << k) - 1] << endl;

    return 0;
}