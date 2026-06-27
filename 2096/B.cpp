#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n,k;
        cin >> n >> k;
        priority_queue<int> pq;
        long long res = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            arr[i] = a;
        }

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            res += max(arr[i], a);
            pq.push(min(arr[i], a)); 
        }

        for (int i = 0; i < k - 1; i++) {
            res += pq.top();
            pq.pop();
        }

        cout << res + 1 << endl;
    }
    return 0;
}   