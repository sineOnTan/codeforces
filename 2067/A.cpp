#include <bits/stdc++.h>
using namespace std;

int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int a,b;
        cin >> a >> b;
        if (a + 1 == b) {
            cout << "yes" << endl;
        } else if (a > b and (a - b + 1) % 9 == 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}   