#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main () {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int pointss;
        cin >> pointss;
        unordered_set<int> zero_points;
        unordered_set<int> one_points;
        int counter = 0;
        int points = 0;
        int result = 0;
        for (int j = 0; j < pointss; j++) {
            int x;
            int y;
            cin >> x >> y;
            if (y == 0) {
                zero_points.insert(x); 
                if (one_points.find(x) != one_points.end()) {
                    counter++;
                }
            } else {
                one_points.insert(x);
                if (zero_points.find(x) != zero_points.end()) {
                    counter++;
                }
            }
            points++;
        }
        result += (points - 2) * counter;
        for (auto x : zero_points) {
            if(one_points.find(x - 1) != one_points.end() and one_points.find(x + 1) != one_points.end()) {
                result++;
            }
        } 

        for (auto x : one_points) {
            if(zero_points.find(x - 1) != zero_points.end() and zero_points.find(x + 1) != zero_points.end()) {
                result++;
            }
        } 
        cout << result << endl;
    }
    return 0;
}