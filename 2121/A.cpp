#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n,s;
        cin >> n >> s;
        int minima = 100;
        int maxima = 0;
        while (n--) {
            int temp;
            cin >> temp;
            minima = min(minima, temp);
            maxima = max(maxima, temp);
        }

        int res = INT_MAX;
        minima = max(0, s - minima);
        maxima = max(0, maxima - s);
        if (minima != 0 and maxima != 0) cout << 2 * min(maxima, minima) + max(minima, maxima) << endl;
        else cout << max(maxima, minima) << endl;
    }
    return 0;
}