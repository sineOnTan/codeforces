#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n,k;
        cin >> n >> k;
        for (int i = 0; i < k; i++) cout << "1";
        for (int i = 0; i < n - k; i++) cout << "0";
        cout << endl;
    }
    return 0;
}