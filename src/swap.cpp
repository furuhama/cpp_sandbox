#include <iostream>

void swap(int& n1, int& n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main() {
    int n1 = 3652;
    int n2 = 82735;

    std::cout << n1 << ", " << n2 << std::endl;
    swap(n1, n2);
    std::cout << n1 << ", " << n2 << std::endl;

    return 0;
}
