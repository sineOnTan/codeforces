#include <bits/stdc++.h>
using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int nums;
        cin >> nums;
        int works = true;
        for (int i = 0; i < nums; i++) {
            int num;
            cin >> num;
            if (num == 0) works = false;
            else if (2 * i >= num) works = false;
            else if ((nums - 1 - i) * 2 >= num) works = false;
        }
        if (works) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}