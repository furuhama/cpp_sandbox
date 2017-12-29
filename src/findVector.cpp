/* Copyright 2017 furuhama */

#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < n; i++)

int vectorFind(std::vector<int>& v, int& value) {
    std::vector<int>::iterator iter;
    iter = std::find(v.begin(), v.end(), value);
    return *iter;
}

int main() {
    std::vector<int> myVec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 276572};
    int value = 100;
    std::cout << "vectorFind(" << value << "): " <<  vectorFind(myVec, value) << std::endl;
    // std::cout << myVector[5] << std::endl;
    REP(i, 12) {
        std::cout << myVec[i] << std::endl;
    };

    return 0;
}
