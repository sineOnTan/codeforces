#include <bits/stdc++.h>
using namespace std;
#define int long long
#define space << " "

const int N = 1e6;
int n_vec[N];
int m_vec[N];
pair<int,int> com_vec[N];



int32_t main () {
    int cases;
    cin >> cases;
    n_vec[0] = 0;
    m_vec[0] = 0;
    com_vec[0] = make_pair(0,0);



    while (cases--) {
        int n,m,q;
        cin >> n >> m >> q;
        priority_queue<pair<int, bool>> pq;
        for (int i = 1; i <= n; i++) {cin >> n_vec[i]; pq.emplace(n_vec[i], 0);}
        for (int i = 1; i <= m; i++) {cin >> m_vec[i]; pq.emplace(m_vec[i], 1);}

        sort(n_vec + 1, n_vec + n + 1);
        reverse(n_vec + 1, n_vec + n + 1);
        sort(m_vec + 1, m_vec + m + 1);
        reverse(m_vec + 1, m_vec + m + 1);

        for (int i = 1; pq.size() != 0; i++) {
            auto top = pq.top();
            pq.pop();

            if (top.second == 0) {com_vec[i] = com_vec[i - 1]; com_vec[i].first++;}
            else {com_vec[i] = com_vec[i - 1]; com_vec[i].second++;}
        }

        for (int i = 1; i <= n; i++) n_vec[i] = n_vec[i - 1] + n_vec[i];
        for (int i = 1; i <= m; i++) m_vec[i] = m_vec[i - 1] + m_vec[i];

        while (q--) {
            int x,y,z;
            cin >> x >> y >> z;
            auto p = com_vec[z];
            if (p.first > x) y = z - x;
            else if (p.second > y) x = z - y;
            else {x = com_vec[z].first; y = com_vec[z].second;}
            cout << n_vec[x] + m_vec[y] << endl;
        }
    }
    return 0;
}