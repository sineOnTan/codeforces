#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200010;

int a[N];

int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int buns;

        cin >> buns;
        if (buns % 2 == 0) {
            for (int i = 1; i <= buns / 2; i++) cout << i << " " << i << " ";
        } else {
            if (buns < 100) {cout << "-1";}
            else {
                int i = 1;

                a[buns] = i;
                a[buns - 64] = i;
                a[buns - 100] = i;
                i++;

                for (int j = 1; j < 36; j++) {
                    a[buns - 100 + j] = i;
                    a[buns - 64 + j] = i;
                    i++;
                } 
                for (int j = 36; buns - 64 + j != buns; j+=2) {
                    a[buns - 64 + j] = i;
                    a[buns - 64 + j + 1] = i;
                    i++;
                }

                for (int j = 1; j < buns - 100; j+=2) {a[j] = i; a[j + 1] = i; i++;}
                for (int j = 1; j <= buns; j++) cout<<a[j] << " ";


            }
        }

        cout << endl;

    }
    return 0;
}