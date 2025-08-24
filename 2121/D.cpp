#include <bits/stdc++.h>

using namespace std;
const int N = 45;
int a[N];
int b[N];


int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        vector<pair<int,int>> vec;

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (a[j + 1] < a[j]) {swap(a[j + 1], a[j]); vec.emplace_back(1, j);}
                if (b[j + 1] < b[j]) {swap(b[j + 1], b[j]); vec.emplace_back(2, j);}
            }
        }

        for (int i = 1; i <= n; i++) {
            if (a[i] > b[i]) {swap(a[i], b[i]); vec.emplace_back(3, i);}
        }

        cout << vec.size() << endl;
        for (auto i : vec) cout << i.first << " " << i.second << endl;

        // for (int i = 1; i <= n; i++) cout << a[i] << " ";
        // cout << endl;
        // for (int i = 1; i <= n; i++) cout << b[i] << " ";
        // cout << endl;
    }
    return 0;
}