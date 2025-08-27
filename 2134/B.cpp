#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) arr[i] += k;
            arr[i] += ((arr[i] % (k + 1))) * k;
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}   