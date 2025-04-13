#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        string s;
        cin >> s;
        int length = s.size();
        int temp = 0;
        while (s.back() == '0') {s.pop_back(); temp++;}

        for (auto i : s) if (i != '0') temp++;

        cout << temp - 1 << endl;
    }
    return 0;
}