#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int rows;
        stack<int> v;
        cin >> rows;
        for (int i = 0; i < rows; i++) {
            string s;
            cin >> s;
            if (s[0] == '#') {
                v.push(1);
            } else if (s[1] == '#') {
                v.push(2);
            } else if (s[2] == '#') {
                v.push(3);
            } else if (s[3] == '#') {
                v.push(4);
            }
        }
        while (!v.empty()) {
            auto i = v.top();
            v.pop();
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}