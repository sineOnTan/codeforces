#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main () {
    int cases;
    cin >> cases;
    while (cases--) {
        int length;
        string temp;
        cin >> length;
        int average = length / 5;
        int remainder = length % 5;

        for (int i = 0; i < average; i++) {
            temp += 'a';
        }
            if (remainder) {
                remainder--;
                temp+= 'a';
            }
        for (int i = 0; i < average; i++) {
            temp += 'e';

        }
            if (remainder) {
                remainder--;
                temp+= 'e';
            }
        for (int i = 0; i < average; i++) {
            temp += 'i';

        }
                    if (remainder) {
                remainder--;
                temp+= 'i';
            }
        for (int i = 0; i < average; i++) {
            temp += 'o';

        }
                    if (remainder) {
                remainder--;
                temp+= 'o';
            }
        for (int i = 0; i < average; i++) {
            temp += 'u';

        }

            if (remainder) {
                remainder--;
                temp+= 'u';
            }
        cout << temp << endl;

    }
    return 0;
}