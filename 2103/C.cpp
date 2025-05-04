// Definitely overcomplicated it with determining the count of less and greaters.
// Converting to binary first is definitely easier.
// Honestly suprised at the simplicity of the linear time solution.

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, k;
        cin >> n >> k;
        int flag = false;

        int first_valid = INT_MAX;
        int last_valid = INT_MAX;
        int k_polarity = 0;

        for (int i = 1; i <= n; i++) {
            int temp;
            cin >> temp;
            if (temp <= k) {arr[i] = 1; k_polarity++;}
            else {arr[i] = 0; k_polarity--;}

            if (k_polarity >= 0 and first_valid != INT_MAX and arr[i] == 1) flag = true;
            if (k_polarity >= 0) first_valid = min(first_valid, i);
        }
        reverse(arr + 1, arr + n + 1);
        k_polarity = 0;
        for (int i = 1; i <= n; i++) {
            if (arr[i] == 1) {k_polarity++;}
            else k_polarity--;

            if (k_polarity >= 0 and last_valid != INT_MAX and arr[i] == 1) flag = true;
            if (k_polarity >= 0) last_valid = min(last_valid, i);
        }

        if (last_valid + first_valid < n) flag = true;  
        
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}