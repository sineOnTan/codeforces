#include <bits/stdc++.h>

using namespace std;

#define int long long

int zero = 0;

int32_t main () {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int length, queries;
        int temp = 0;
        int sum = 0;
        cin >> length >> queries;
        vector<int> a(length);
        vector<int> values(1);
        for (int &r : a) {
            cin >> r;
            values.push_back(values.back() + r);
            sum += r;
        }
        for (int &r : a) {
            values.push_back(values.back() + r);
        }


        int left, right;
        for (int j = 0; j < queries; j++) {
            int result = 0;

            cin >> left >> right;
            int revolutions = right / length;
            int shift = (right) % length;
            result += revolutions * sum;
            result += values[(revolutions + shift)] - values[(revolutions)];

            cout << "b4 " << result << " ";


            revolutions = (left) / length;
            shift = (left) % length;
            result -= revolutions * sum;

            result -= values[(revolutions + shift - 1)] - values[(revolutions) + 1];
        
            cout << result << endl;
        }
    }
    return 0;
}

// 1
// 3 3
// 1 2 3
// 1 9
// 3 5
// 8 8
