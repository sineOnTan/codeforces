#include <bits/stdc++.h>
using namespace std;



int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        int n;
        cin >> n;

        int pred = -1;
        int count = 0;

        while (n--) {
            int temp;
            cin >> temp;

            if (pred + 1 < temp) {
                pred = temp;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}   