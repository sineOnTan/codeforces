#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        int flick = 0;
        for (int i = 0; i < n; i++) {
            char temp;
            cin >> temp;
            if (temp == '1' and flick % 2 == 0) flick++;
            else if (temp == '0' and flick % 2 == 1) flick++;
        }
        if (flick >= 3) cout << max((long long)0, flick - 2) + n << endl;
        else if (flick == 2) cout << max((long long)0, flick - 1) + n << endl;
        else cout << max((long long)0, flick) + n << endl;
    }
    return 0;
}   