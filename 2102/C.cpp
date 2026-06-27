#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e3 + 5;
int arr[N][N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) arr[i][j] = -1;
        int n;
        cin >> n;
        int cur = (n * n) - 1;

        int shift = 0;

        while (cur > 0) {
            for (int i = shift; i < n - 1 - shift; i++) {
                arr[shift][i] = cur;
                cur--;
            }

            for (int i = shift; i < n - 1 - shift; i++) {
                arr[i][n - 1 - shift] = cur;
                cur--;
            }


            for (int i = n - 1 - shift; i > shift; i--) {
                arr[n - 1 - shift][i] = cur;
                cur--;
            }

            for (int i = n - 1 - shift; i > shift; i--) {
                arr[i][shift] = cur;
                cur--;
            }
            shift++;
        }

        if (n % 2 == 1) arr[(n)/2][(n)/2] = 0;


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}   