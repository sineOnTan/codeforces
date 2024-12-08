#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N = 10010;



int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int pillars;
        cin >> pillars;
        int t = pillars;
        int max_repeats = 1;
        int repeats = 1;
        int previous = 0;
        while (pillars--) {
            int cur;
            cin >> cur;
            if (previous != cur) {
                repeats = 1;
                previous = cur;
            } else {
                repeats++;
                max_repeats = max(max_repeats, repeats);
            }
        }
        cout << t - max_repeats << endl;
    }
    return 0;
}