#include <bits/stdc++.h>
using namespace std;

class DynamicArray {
private:
    vector<int> vec;
    int size = 0;
    int vec_capacity = 0;

public:

    DynamicArray(int capacity) {
        vec = vector<int>(capacity);
        vec_capacity = capacity;
        size = 0;
    }

    int get(int i) {
        return vec[i];
    }

    void set(int i, int n) {
        vec[i] = n;
    }

    void pushback(int n) {
        if (size == vec_capacity) {vec.resize(vec_capacity * 2); vec_capacity *= 2;}
        vec[size] = n;
        size++;
    }

    int popback() {
        size--;
        return vec[size];
    }

    void resize() {
        if (size == vec_capacity) vec.resize(vec_capacity * 2);
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return vec_capacity;
    }
};
