#include<bits/stdc++.h>
using namespace std;

#define space << " "

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int nums;
        cin >> nums;
        int temp;
        set<int> a;
        set<int> b;
        for (int i = 0; i < nums; i++) {
            cin >> temp;
            a.insert(temp);
        }
        for (int i = 0; i < nums; i++) {
            cin >> temp;
            b.insert(temp);
        }
        if ((a.size() == 1 and b.size() <= 2) or (b.size() == 1 and a.size() <= 2)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}