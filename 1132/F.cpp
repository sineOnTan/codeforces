#include <bits/stdc++.h>
using namespace std;
const int N = 505;
int dp[N][N];

int32_t main () {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 0) {cout << 0 << endl; return 0;}
    if (n == 1) {cout << 1 << endl; return 0;}


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = INT_MAX;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) dp[i][i + 1] = 1;
        else dp[i][i + 1] = 2;
    }

    for (int si = 1; si < n; si++) {
        for (int i = 0; i < n - si; i++) {
            for (int j = i; j < i + si; j++) {
                dp[i][i + si] = min(dp[i][i + si], dp[i][j] + dp[j + 1][i + si]);

                if (s[i] == s[j + 1]) {
                    dp[i][i + si] = min(dp[i][i + si], dp[i][j] + dp[j + 2][i + si]);
                }

            }
        }
    }

    cout << dp[0][n - 1] << endl;


    return 0;
}