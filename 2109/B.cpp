#include <bits/stdc++.h>
using namespace std;
#define int long long

#define YES cout << "yes" << endl
#define NO cout << "no" << endl

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int n,m,a,b;
        cin >> n >> m >> a >> b;

        int x = n;
        int y = m;

        int x_cut = x - max(a - 1, n - a);
        int y_cut = y - max(b - 1, m - b);



        int res = 0;

        int min_x = 0;
        int min_y = 0;
        int min_x_cut = 0;
        int min_y_cut = 0;



        int i = 1;
        while (i < x) {
            min_x++;
            i *= 2;
        }
        i = 1;
        while (i < y) {
            min_y++;
            i *= 2;
        }
        i = 1;
        while (i < x_cut) {
            min_x_cut++;
            i *= 2;
        }
        i = 1;
        while (i < y_cut) {
            min_y_cut++;
            i *= 2;
        }

        cout << min(min_x + min_y_cut + 1, min_y + min_x_cut + 1) << endl;
    }
    return 0;
}   