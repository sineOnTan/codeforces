#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main () {
    int n;
    cin >> n;
    while (n--) {
        int n,m,k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int zeroes = 0;
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') zeroes = 0;
            else {
                zeroes++;
                if (zeroes >= m) {
                    res++;
                    zeroes = 0;
                    i += k - 1;
                }
            }
        } 
        cout << res << endl;
    }
    
    return 0;
}