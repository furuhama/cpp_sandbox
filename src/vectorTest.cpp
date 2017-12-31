/* Copyright 2017 furuhama */

#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < n; i++)

int main() {
    std::vector<int> vc(10);
    std::cout << "first iteration: just set memory location" << std::endl;
    REP(i, vc.size()) {
        std::cout << i << ": " << vc[i] << std::endl;
    }
    std::cout << "second iteration: set number for vector" << std::endl;
    REP(i, vc.size()) {
        vc[i] = i;
        std::cout << i << ": " << vc[i] << std::endl;
    }
    return 0;
}
