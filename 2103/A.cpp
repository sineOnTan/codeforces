#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        cout << s.size() << endl;
    }
    return 0;
}   