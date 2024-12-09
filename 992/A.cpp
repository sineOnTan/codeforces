#include <bits/stdc++.h>

using namespace std;

#define space << " "
#define int long long

#define YES {cout << "YES" << endl;}
#define NO {cout << "NO" << endl;}

// Small values so could be brute forced. 
// Had some errors with using sets because they can't have multiple instances of the same value

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n,k;
        cin >> n >> k;

        vector<int> nums;
        map<int,int> m;
        for (int i = 1; i <= n; i++) {
            int temp;
            cin >> temp;
            nums.push_back(temp);
            m[temp] = i;
        }
        auto beg = nums.begin();

        int res = 0;
        while (beg != nums.end()) {
            auto nex = nums.begin();
            bool flag = true;
            while (nex != nums.end()){
                if ((nex != beg) and (((*nex - *beg) % k) == 0)) {
                    flag = false;
                }
                nex = next(nex);
            }

            if (flag) {res = *beg; break;}
            beg = next(beg);
        }

        if (res != 0) {
            YES
            cout << m[res] << endl;
        } else {
            NO;
        }

        nums.clear();
        m.clear();
    }

    return 0;
}