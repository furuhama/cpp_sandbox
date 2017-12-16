#include <iostream>
#define N 100000000

int main() {
    double cnt = 0.0;
    for (int i = 0; i < N; i++) {
        double x = (double)rand()/RAND_MAX;
        double y = (double)rand()/RAND_MAX;

        if ((x * x + y * y) <= 1.0) {
            cnt += 1.0;
        }
    }
    std::cout << "円周率は..." << std::endl << cnt / N * 4.0 << std::endl;
    return 0;
}

