#include <bits/stdc++.h>
using namespace std;



int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n, k;
        cin >> n >> k;

        int zeroes = 0;
        int ones = 0;

        string s;
        cin >> s;
        for (auto i : s) {
            if (i == '0') zeroes++;
            else ones++;
        }

        int count = 0;
        while (count < k or zeroes > ones + 1 or ones > zeroes + 1) {
            if (zeroes > ones) {
                zeroes -= 2;
                count++;
            } else {
                ones -= 2;
                count++;
            }
        }

        if (count == k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}   