#include <vector>
#include <stdexcept>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class MovingTotal
{
public:

    void append(const std::vector<int>& list) 
    {
        for (auto i : list) {
            vec.push_back(i);
            if (vec.size() >= 3) cont.insert(vec[vec.size() - 1] + vec[vec.size() - 2] + vec[vec.size() - 3]);
        }
    }

    bool contains(int total) 
    {
        return cont.contains(total);
    }

private:
    std::vector<int> vec;
    std::set<int> cont;
};

#ifndef RunTests
int main()
{
    MovingTotal movingTotal;

    std::vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    movingTotal.append(first);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;

    std::vector<int> second;
    second.push_back(5);
    movingTotal.append(second);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;
}
#endif