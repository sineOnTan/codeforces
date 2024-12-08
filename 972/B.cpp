#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int cells, teachers, queries;
        cin >> cells >> teachers >> queries;


        set<int> numbers;
        int input;
        while (teachers--) {
            cin >> input;
            numbers.insert(input);
        }

        while (queries--) {
            cin >> input;
            auto above = numbers.upper_bound(input);

            if (above == numbers.begin()) {
                cout << *above - 1 << endl;
            } else {
                auto temp = above;
                above--;
                if (temp == numbers.end()) {
                    cout << cells - *above << endl;
                    continue;
                }
                if (*temp == input or *above == input) {
                    cout << 0 << endl;
                    continue;
                }
                cout << (*temp - *above)/2 << endl;
                continue;
            }
        }

    }
    return 0;
}