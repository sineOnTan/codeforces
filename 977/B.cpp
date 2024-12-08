#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        map<int,int> m;
        priority_queue<int, vector<int>, greater<int>> min_priority_queue;

        int max = 0;
        int n, x, temp;
        cin >> n >> x;
        while (n--) {
            cin >> temp;
            min_priority_queue.push(temp);
        }
        while(min_priority_queue.size() != 0) {
            temp = min_priority_queue.top();
            min_priority_queue.pop();
            if (temp == max) ++max;
            else ++m[temp % x];
        }
        if (max < x) cout << max << endl;
        else {
            while (m[max % x] != 0) {
                m[max % x]--;
                max++;
            }
            cout << max << endl;
        }
    }
    return 0;
}