#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int power[N];
int jumps[N];


int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n + 5; i++) power[i] = 0;
        vector<int> swaps;
        int res = 0;

        cout << "throw " << n - 1 << endl;
        cin >> res;
        if (res == 1) power[n - 1] = 2;
        else power[n - 1] = 1;

        cout << "swap " << n - 1 << endl;
        swap(power[n - 1], power[n]);
        swaps.push_back(n - 1);

        cout << "throw " << n - 1 << endl;
        cin >> res;
        if (res == 1) power[n - 1] = 2;
        else power[n - 1] = 1;

        jumps[n] = jumps[n + power[n]] + 1;
        jumps[n - 1] = jumps[n - 1 + power[n - 1]] + 1;
        
        for (int i = n - 2; i >= 0; i--) {
            if (i == 0) break;
            if (power[i + 1] == 2 and power[i + 2] == 1) {
                cout << "swap " << i + 1 << endl;
                swap(power[i + 1], power[i + 2]);
                swaps.push_back(i + 1);
                jumps[i + 2] = jumps[i + 2 + power[i + 2]];
                jumps[i + 1] = jumps[i + 1 + power[i + 1]];
            }

            cout << "throw " << i << endl;
            int res;
            cin >> res;
            if (res == jumps[i + 2] + 1) {
                power[i] = 2;
                jumps[i] = jumps[i + 2] + 1;
            } else {
                power[i] = 1;
                jumps[i] = jumps[i + 1] + 1;
            }
        }

        reverse(swaps.begin(), swaps.end());

        for (auto i : swaps) {
            swap(power[i], power[i + 1]);
        }
        cout << "! ";
        for (int i = 1; i <= n; i++) cout << power[i] << " ";
        cout << endl;
    }
    return 0;
}   