#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
int a[N];
int i_c[N];
int j_r[N];


int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n,m;
        cin >> n >> m;
        int max_n = 0;

        for (int i = 0; i < n; i++) i_c[i] = 0;
        for (int j = 0; j < m; j++) j_r[j] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i * m + j];
                max_n = max(a[i * m + j], max_n);
            }
        }

        int max_count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i * m + j] == max_n) {
                    i_c[i]++;
                    j_r[j]++;
                    max_count++;
                }
            }
        }

        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i * m + j] == max_n) {
                    if(i_c[i] + j_r[j] == max_count + 1) flag = true;
                } else if (a[i * m + j] != max_n) {
                    if(i_c[i] + j_r[j] == max_count) flag = true;
                }
            }
        }
        if (flag) cout << max_n - 1 << endl;
        else cout << max_n << endl;
    }
    return 0;
}