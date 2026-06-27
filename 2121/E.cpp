#include <bits/stdc++.h>

using namespace std;
const int N = 45;
int a[N];
int b[N];


int main () {
    int cases;
    cin >> cases;
    while(cases--) {
        string a,b;
        cin >> a >> b;

        int res = 0;
        bool flag = true;
        for (int i = 0; i < a.size(); i++) {
            if (flag and a[i] == b[i]) res += 2;
            else if (flag and a[i] + 1 == b[i]) {res++; flag = false;}
            else if (a[i] == '9' and b[i] == '0') res++;
            else break;
        }
        cout << res << endl;
    }
    return 0;
}