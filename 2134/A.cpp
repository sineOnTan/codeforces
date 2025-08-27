#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,a,b;
        cin >> n >> a >> b;

        if (n % 2 == b % 2 and (b > a or a % 2 == b % 2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}   