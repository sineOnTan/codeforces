#include <bits/stdc++.h>
using namespace std;
#define int long long

#define YES cout << "yes" << endl
#define NO cout << "no" << endl

const int N = 2e5 + 5;
int arr[N];

int32_t main () {
    int cases;
    cin >> cases;


    while (cases--) {
        int n;
        cin >> n;
        int losses = 0;
        int pred;
        cin >> pred;
        if (pred == 0) losses++;

        bool valid = true;

        for (int i = 1; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp == 0 and pred == 0) valid = false;
            if (temp == 0) losses++; 
            pred = temp;
        }
        if (losses < 1 or valid == false) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}   