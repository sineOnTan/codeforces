#include <bits/stdc++.h>
using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int res;
        cin >> res;
        int cur = 1;
        int pred = 0;
        int moves = 1;
        while (cur < res) {
            int temp = cur;
            cur = 2 * pred + 1;
            pred = temp;
            moves++;
        }
        cout << moves + 2 << endl;
    }
    return 0;
}