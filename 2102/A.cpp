#include <bits/stdc++.h>
using namespace std;
#define int long long

#define YES cout << "yes" << endl
#define NO cout << "no" << endl

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n,m,p,q;
        cin >> n >> m >> p >> q;
        if (n % p == 0) {
            if (n / p * q == m) YES;
            else NO;
        } else YES;
    }
    return 0;
}   