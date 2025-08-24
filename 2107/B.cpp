#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int count_max = 1;
        int num_max = 0;
        int num_min = INT_MAX;
        int sum = 0;

        int n,k;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += temp;

            if (temp == num_max) count_max++;
            else if (temp > num_max) {
                num_max = temp;
                count_max = 1;
            }

            num_min = min(num_min, temp);
        }

        if (num_max > num_min + k + 1) cout << "Jerry" << endl;
        else if (num_max > num_min + k and count_max > 1) cout << "Jerry" << endl;
        else if (sum % 2 == 0) cout << "Jerry" << endl;
        else cout << "Tom" << endl;
    }
    return 0;
}   