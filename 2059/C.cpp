#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int nums;
        cin >> nums;
        priority_queue<int, std::vector<int>, std::greater<int>> pq;
        for(int i = 0; i < nums; i++) {
            int ones = 0;
            for (int j = 0; j < nums; j++) {
                int t;
                cin >> t;
                if (t == 1) ones++;
                else ones = 0;
            }
            pq.push(ones);
        }
        int res = 0;
        while(pq.size() != 0) {
            if(pq.top() >= res) res++;
            pq.pop();
        }
        cout << res << endl;
    }
    return 0;
}