#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < n; i++)

int vecFind(std::vector<int>* v, int* val) {
    std::vector<int>::iterator iter;
    iter = std::find(v->begin(), v->end(), *val);
    return *iter;
}

int main() {
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 276572};
    int val = 100;
    std::cout << "vecFind(" << val << "): " << vecFind(&vec, &val) << std::endl;
    // std::cout << v[5] << std::endl;
    REP(i, 12) {
        std::cout << vec[i] << std::endl;
    };

    return 0;
}
