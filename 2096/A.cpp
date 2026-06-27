#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 201;
char a[N];

int res[N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;

        int less = 0;
        for (int i = 0; i < n - 1; i++) {
            cin >> a[i];
            if (a[i] == '<') less++;
        }
        int great = less + 2;
        cout << less + 1 << " ";
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == '<') cout << less-- << " ";
            else cout << great++ << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}   