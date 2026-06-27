#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5 + 5;
int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {cout << -1 << endl; continue;}
        int shift = 1;
        for (int i = 0; i < n; i++) {
            a[(i + shift) % n] = i;
            shift += 2;
            // cout << (i + shift) % n << " " << i << endl;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}