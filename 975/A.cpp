#include <bits/stdc++.h>

using namespace std;
#define int long long
// const int N = 1010;

// int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int nums;
        cin >> nums;
        int best = 0;
        int best_index = 1;
        for (int i = 1; i <= nums; i++) {
            int temp;
            cin >> temp;
            int pre = floor((i - 1)/2.0);
            int post = floor((nums - i)/2.0);

            if (pre + post + temp + 1 > best) {
                best = pre + post + temp + 1;
            } 

            best_index++;
        }
        cout << best << endl;;
    }
    return 0;
}