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
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
            s.insert(temp);
        }
        if (s.size() == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for (auto i : a) {
                if (i == *(s.rbegin())) cout << "2 ";
                else cout << "1 "; 
            }
            cout << endl;
        }
    }
    return 0;
}   