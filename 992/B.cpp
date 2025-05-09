#include <bits/stdc++.h>

using namespace std;

#define space << " "
#define int long long

#define YES {cout << "YES" << endl;}
#define NO {cout << "NO" << endl;}
const int N = 100010;
int a[N];

// Precomputes the values
// The values can be precomputed by using double the previous number plus 2
// Giving the solution.

int32_t main () {
    int cases;
    cin >> cases;

    int cur = 2;
    int next = 4;
    a[1] = 1;

    for (int i = 2; i < N; i++) {
        if(i > next) {next = next * 2 + 2; cur++;}

        a[i] = cur;
    }

    while (cases--) {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }

    return 0;
}