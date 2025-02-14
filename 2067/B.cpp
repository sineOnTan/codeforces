#include <bits/stdc++.h>

using namespace std;

const int N = 2e3 + 5; 
int a[N];

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        for (int i = 0; i < N; i++) a[i] = 0;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            ++a[temp];
        }
        bool res = true;
        for (int i = 0; i < N; i++) {
            if (a[i] == 1) {res = false; break;}
            else if (a[i] >= 2) {
                a[i] -= 2;
                a[i + 1] += a[i];
            }
        }
        if (res) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}   