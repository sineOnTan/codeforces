#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 65;
int a[N];
int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        for (int i = 0; i < N; i++) a[i] = 0;

        int n,k;
        cin >> n >> k;
        int beauty = 0;
        while (n--) {
            int cur;
            cin >> cur;
            int cur_bit = 0;
            for (int i = 0; i < N; i++) {
                if (cur % 2 == 0) a[cur_bit]++;
                else beauty++;
                cur_bit++;
                cur /= 2;
            }
        }
        for (int i = 0; i < N; i++) {
            beauty += min(a[i], (long long)(k / pow(2, i)));
            k -= a[i] * pow(2, i);
            if (k <= 0) break;
        }

        cout << beauty << endl;
    }
    return 0;
}