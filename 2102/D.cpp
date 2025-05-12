#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e3 + 5;
int arr[N][N];

int32_t main () {
    int cases;
    cin >> cases;

    while (cases--) {
        int n;
        cin >> n;
        map<int,int> m1_num_to_index;
        map<int,int> m1_index_to_num;
        vector<int> v1;

        map<int,int> m2_num_to_index;
        map<int,int> m2_index_to_num;
        vector<int> v2;


        for (int i = 0; i < n; i += 2) {
            int temp;
            cin >> temp;
            m1_num_to_index[temp] = i/2;
            m1_index_to_num[i/2] = temp;
            if (i + 1 < n) {
                cin >> temp;
                m2_num_to_index[temp] = i/2;
                m2_index_to_num[i/2] = temp;
            }
        }

        while(m2_num_to_index.size() != 1) {
            auto small_num = (*(m1_num_to_index.begin())).first;
            auto small_index = (*(m1_num_to_index.begin())).second;

            auto next_num = (*(m1_index_to_num.begin())).second;
            auto next_index = (*(m1_index_to_num.begin())).first;

            v1.push_back(small_num);

            m1_index_to_num[small_index] = next_num;
            m1_num_to_index[next_num] = small_index;

            m1_index_to_num.erase(next_index);
            m1_num_to_index.erase(small_num);

            swap(m2_index_to_num[small_index], m2_index_to_num[next_index]);

            m2_num_to_index[m2_index_to_num[small_index]] = small_index;
            m2_num_to_index[m2_index_to_num[next_index]] = next_index;


            small_num = (*(m2_num_to_index.begin())).first;
            small_index = (*(m2_num_to_index.begin())).second;

            next_num = (*(m2_index_to_num.begin())).second;
            next_index = (*(m2_index_to_num.begin())).first;

            v2.push_back(small_num);

            m2_index_to_num[small_index] = next_num;
            m2_num_to_index[next_num] = small_index;

            m2_index_to_num.erase(next_index);
            m2_num_to_index.erase(small_num);

            swap(m1_index_to_num[small_index + 1], m1_index_to_num[next_index + 1]);

            m1_num_to_index[m1_index_to_num[small_index + 1]] = small_index + 1;
            m1_num_to_index[m1_index_to_num[next_index + 1]] = next_index + 1;
        }

        if (m1_num_to_index.size() != 0) v1.push_back((*m1_num_to_index.begin()).first);
        if (m2_num_to_index.size() != 0) v2.push_back((*m2_num_to_index.begin()).first);


        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
            if (i < v2.size()) cout << v2[i] << " ";
        }

        cout << endl;
    }
    return 0;
}   