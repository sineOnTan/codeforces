#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 100000;
int vector[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int count = 0;
        bool flag = true;
        for (int i = 0; i < k; i++) {
            if (s[i] == '1') count++; 
        }   
        if (count == k) flag = false;
        for (int i = k; i < s.size(); i++) {
            if (s[i] == '1') count++;
            if (s[i - k] == '1') count--;
            if (count == k) flag = false;
        }
        if (flag) {
            cout << "YES" << endl;
            int max = n;
            int min = 1;
            for (auto i : s) {
                if (i == '1') cout << min++ << " ";
                else cout << max-- << " ";
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}   