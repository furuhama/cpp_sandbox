#include <iostream>

int main() {
    int* p = new int[100];

    for (int i = 0; i < 100; i++) {
        p[i] = i * i;
        std::cout << p[i] << std::endl;
    }

    // Array Memory free should be `delete[]` (NOT `delete` )
    delete[] p;

    return 0;
}
