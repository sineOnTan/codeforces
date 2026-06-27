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
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        int res = 0;
        for (int i = 2; i <= n; i+=2) {
            if (arr[i] < arr[i - 1]) {
                int temp = arr[i - 1] - arr[i];
                res += temp;
                arr[i - 1] -= temp;
            }
            if (i + 1 <= n and (arr[i] < arr[i - 1] + arr[i + 1])) {
                int temp = arr[i - 1] + arr[i + 1] - arr[i];
                res += temp;
                arr[i + 1] -= temp;
            } 
        }
        cout << res << endl;
    }
    return 0;
}   