#include<bits/stdc++.h>
using namespace std;

#define space << " "

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, k;
        cin >> n >> k;

        map<int,int> m;

        while (n--) {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
        for (auto i : m) {
            pq.push(i.second);
        }

        while (k >= pq.top() and pq.size() != 1) {
            k -= pq.top();
            pq.pop();
        }
        cout << pq.size() << endl;
    }
    return 0;
}