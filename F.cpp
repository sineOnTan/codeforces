#include <bits/stdc++.h>

using namespace std;

int main () {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int length, queries;
        long long value = 0;
        cin >> length >> queries;
        vector<long long> array;
        array.push_back(0);

        for (int i = 0; i < length; i++) {
            long long temp;
            cin >> temp;
            value += temp;
            array.push_back(value);
        }
        for (int i = 0; i < queries; i++) {
            int begin, end;
            cin >> begin >> end;
            long long begin_sum = begin/length * array[length];
            long long end_sum = end/length * array[length];
            begin_sum += (array[begin % length] - array[begin/length]);
            end_sum += (array[end % length] - array[end/length]);
            cout << end_sum - begin_sum << endl;
        }
    }
    return 0;
}