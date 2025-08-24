#include <bits/stdc++.h>

using namespace std;
const int N = 30;
int a[N];

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < N; i++) a[i] = 0;
        for (auto i : s) a[i - 'a']++;
        bool flag = false;
        for (int i = 1; i < n - 1; i++) {
            a[s[i] - 'a']--;
            if (a[s[i] - 'a'] >= 1) flag = true;
            a[s[i] - 'a']++;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}