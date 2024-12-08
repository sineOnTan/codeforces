#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int length, start;
        cin >> length >> start;
        int lower = 0;
        int upper = length;
        int middle = lower + upper;
        middle/=2;

        while (middle != lower) {
            if ((length - middle) * ((start + middle) * 2 + (length - middle - 1)) > (middle) * (start * 2 + (middle - 1))) {
                lower = middle;
                middle = lower + upper;
                middle/=2;
            } else {
                upper = middle;
                middle = lower + upper;
                middle/=2;
            }
        }

        int result = min(abs((length - upper) * ((start + upper) * 2 + (length - upper - 1)) - (upper) * (start * 2 + (upper - 1)))/2, abs((length - lower) * ((start + lower) * 2 + (length - lower - 1)) - (lower) * (start * 2 + (lower - 1)))/2);
        cout << result << endl;
    }
    return 0;
}