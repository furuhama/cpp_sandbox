#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        int a = i * j;
        int b = i * i * j * j;
        std::cout << a << ' ' << b << std:: endl;
      }
    }
    return 0;
}

