#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,x;
        cin >> n >> x;
        priority_queue<int> pq;
        while (n--) {
            int temp;
            cin >> temp;
            pq.push(temp);
        }
        int cur_teams = 0;
        int team_size = 0;
        while (pq.size() != 0) {
            int temp = pq.top();
            pq.pop();
            team_size++;
            if (team_size * temp >= x) {
                cur_teams++;
                team_size = 0;
            }
        }
        cout << cur_teams << endl;
    }
    return 0;
}