#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1e7 + 5;
bool a[N];

int32_t main () {
    for (int i = 2; i < N; i++) {
        for (int j = i; j * i < N; j++) {
            a[i * j] = false;
        }
    }
    int cases;
    cin >> cases;
    while (cases--) {
        
    }
    return 0;
}