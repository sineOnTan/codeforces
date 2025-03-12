#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a[N];
int b[N];

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n,m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cout << a[i] << " b ";
        cout << endl;

        for (int i = 0; i < m; i++) cin >> b[i];
        sort(b, b + m);

        int pred = INT_MIN;
        bool res = true;
        for (int i = 0; i < m; i++) {
            if (b[m - 1] - a[i] < pred and a[i] < pred) {res = false; break;}
            int hi = m;
            int lo = 0;
            while (hi > lo) {
                int mid = (hi + lo) / 2;
                if (b[mid] - a[i] > pred) hi = mid;
                else lo = mid + 1;
            }
            cout << i << " " << a[i] << " " << b[hi] << " ";
            if (b[hi] - a[i] < pred) pred = a[i];
            else pred = b[hi] - a[i];
            cout << pred << endl;
        }

        if (res) cout << "yes" << endl;
        else cout << "no" << endl;
        }
    return 0;
}   