#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        string nums;
        cin >> nums;
        int t = 0;
        for (auto i : nums) if (i == '1') t++;
        cout << t << endl;
    }
    return 0;
}