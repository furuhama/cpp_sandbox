#include <iostream>

template<class T>
T max_t(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int i1 = 10;
    int i2 = 50;
    int m1 = max_t(i1, i2);
    std::cout << m1 << std::endl;

    double d1 = 1.5;
    double d2 = 2.452;
    double m2 = max_t(d1, d2);
    std::cout << m2 << std::endl;

    return 0;
}
