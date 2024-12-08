#include <bits/stdc++.h>

using namespace std;
#define int long long

const int lmax = 1e13 + 5;
const int N = 2e5 + 5;

int dp[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        priority_queue<int, vector<int>, greater<int>> min_priority_queue;
        int temp;
        int nums;
        cin >> nums;
        while (nums--) {
            cin >> temp;
            min_priority_queue.push(temp);
        }

        while (min_priority_queue.size() != 1) {
            auto t1 = min_priority_queue.top();
            min_priority_queue.pop();
            auto t2 = min_priority_queue.top();
            min_priority_queue.pop();
            min_priority_queue.push((t1 + t2)/2);
        }
        cout << min_priority_queue.top() << endl;
        min_priority_queue.pop();

    }
    return 0;
}